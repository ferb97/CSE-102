#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,m,i,j;
    scanf("%d%d%d",&n,&m,&t);
    int a[m+5],b[m+5];
    for(i=1;i<=m;i++){
        scanf("%d%d",&a[i],&b[i]);
    }
    b[0]=0;
    int l=n,e=1;
    for(i=1;i<=m;i++){
        l=l-a[i]+b[i-1];
        if(l<=0){
           e=0;
           break;
        }
        if(l+b[i]-a[i]>=n)
          l=n;
        else{
            l+=b[i]-a[i];
        }
       // printf("%d\n",l);
    }
    //printf("%d\n",l);
    if(e==1){
       l+=b[m]-t;
       if(l<=0)
          e=0;
    }
    if(e==0)
      printf("No\n");
    else
      printf("Yes\n");
    return 0;
}
