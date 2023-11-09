#include<stdio.h>
int main()
{
    int i,j,m,n,x,l;
    scanf("%d%d",&m,&n);
    int (*arr)[n];
    arr=(int*)malloc(m*n*sizeof(int));
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&x);
            *(*(arr+i)+j)=x;
        }
    }
    scanf("%d",&l);
    int e=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            //printf("%d ",*(*(arr+i)+j));
            if(l==*(*(arr+i)+j)){
               e=1;
               printf("%d %d\n",i+1,j+1);
            }
        }
    }
    if(e==0)
      printf("-1\n");
    free(arr);
    return 0;
}
