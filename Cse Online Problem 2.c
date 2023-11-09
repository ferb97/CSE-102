#include<stdio.h>
#include<string.h>
char *prepend(char *s,char *t,int pos)
{
    char *c;
    int i,j;
    c=(char*)malloc((strlen(s)+strlen(t)-pos+1)*sizeof(char));
    i=pos;
    j=0;
    while(*(s+i)){
        c[j]=*(s+i);
        i++;
        j++;
    }
    i=0;
    while(*(t+i)){
        c[j]=*(t+i);
        i++;
        j++;
    }
    *(c+j)='\0';
    return c;
}
int main()
{
    char s[105],t[105];
    int pos;
    gets(s);
    gets(t);
    scanf("%d",&pos);
    char *ans;
    ans=prepend(s,t,pos);
    printf("%s\n",ans);
    return 0;
}
