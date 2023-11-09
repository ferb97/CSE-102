#include<stdio.h>
int* function(int* arr,int n)
{
    *arr=1;
    int i;
    for(i=1;i<n;i++){
       arr++;
       *arr=*(arr-1)+2;
    }
    return arr;
}
int main()
{
    int* arr;
    int n,j;
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    function(arr,n);
    for(j=0;j<n;j++){
        printf("%d ",*(arr+j));
    }
    printf("\n");
    free(arr);
    return 0;
}
