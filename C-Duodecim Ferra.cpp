#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l,ans=1,i,j;
    scanf("%lld",&l);
    long long a[14];
    for(i=1;i<=11;i++){
        a[i]=(l-i);
    }
    for(i=11;i>=2;i--){
        //int f=1;
        for(j=1;j<=11;j++){
            if(a[j]%i==0){
               a[j]/=i;
               //f=0;
               break;
            }
        }
       // if(f==0)
         // e[i]=0;
    }
    for(i=1;i<=11;i++){
        //printf("%d\n",e[i]);
        ans*=a[i];
    }
    printf("%lld\n",ans);
    return 0;
}
