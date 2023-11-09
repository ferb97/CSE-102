#include<bits/stdc++.h>
using namespace std;
int answer(int a[],int b[],int i,int j)
{
    int mn,c;
    if(i==0)
      return j;
    if(j==0)
      return i;
    if(a[i]==b[j])
      c=0;
    if(a[i]!=b[j])
      c=1;
    mn=min(answer(a,b,i-1,j),answer(a,b,i,j-1));
    mn=min(mn,answer(a,b,i-1,j-1)+c);
    return mn;

}
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    int a[n+3],b[m+3];
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=m;i++){
        scanf("%d",&b[i]);
    }
    printf("%d\n",answer(a,b,n,m));
    return 0;
}
