#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,mn=1000000000,ans=0;
    scanf("%d%d",&n,&m);
    int a[m+3];
    for(i=1;i<=m;i++){
        scanf("%d",&a[i]);
    }
    a[0]=0;
    a[m+1]=n+1;
    sort(a,a+m+2);
    for(i=1;i<=m+1;i++){
        if(a[i]-1-a[i-1]>0)
          mn=min(mn,a[i]-1-a[i-1]);
    }
    mn=mn%1000000002;
    for(i=1;i<=m+1;i++){
        if(a[i]-1>a[i-1])
          ans+=(a[i]-a[i-1]-2)/mn+1;
    }
    printf("%d\n",ans);
    return 0;
}
