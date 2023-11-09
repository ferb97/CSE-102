#include<stdio.h>
#include<string.h>
char s1[40],s2[40];
int countsubsequence(char s1[],char s2[],int i,int j)
{
    if(j==0)
      return 1;
    if(i==0)
      return 0;
    if(s1[i-1]==s2[j-1])
      return countsubsequence(s1,s2,i-1,j-1)+countsubsequence(s1,s2,i-1,j);
    return countsubsequence(s1,s2,i-1,j);
}
int main()
{
    int n1,n2,ans;
    gets(s1);
    gets(s2);
    n1=strlen(s1);
    n2=strlen(s2);
    ans=countsubsequence(s1,s2,n1,n2);
    printf("%d\n",ans);
    return 0;
}
