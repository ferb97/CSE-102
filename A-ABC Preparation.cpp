#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,mn;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    mn=min(a,b);
    mn=min(mn,c);
    mn=min(mn,d);
    printf("%d\n",mn);
    return 0;
}
