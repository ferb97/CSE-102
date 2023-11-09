#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1005],s2[1005],s3[15];
    int i,j,k,l,n1,n2,n3;
    gets(s1);
    gets(s2);
    gets(s3);
    n1=strlen(s1);
    n2=strlen(s2);
    n3=strlen(s3);
    j=0;
    while(j<n1){
        int e=1;
        for(k=0;k<n2;k++){
            if(s1[j+k]!=s2[k]){
               e=0;
               j++;
               break;
            }
        }
        if(e==1){
           int c=0;
           if(n3>=n2){
              for(k=n1+n3-n2-1;k>=j+n3;k--){
                 s1[k]=s1[n1-1-c];
                 c++;
              }
           }
           else{
               for(k=j+n3;k<n1+n3-n2;k++){
                   s1[k]=s1[j+n2+c];
                   c++;
               }
           }
           for(k=0;k<n3;k++){
               s1[j]=s3[k];
               j++;
           }
           n1+=n3-n2;
           //printf("%s\n",s1);
        }
    }
    s1[j]='\0';
    printf("%s\n",s1);
    return 0;
}
