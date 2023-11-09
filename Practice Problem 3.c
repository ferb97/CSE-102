#include<stdio.h>
char* mystrstr(char *str1,char *str2)
{
    int i,j,e;
    for(i=0;*(str1+i)!='\0';i++){
        e=1;
        for(j=0;*(str2+j)!='\0';j++){
            if(*(str1+i+j)!=*(str2+j)){
               e=0;
               break;
            }
        }
        if(e==1)
          return (str1+i);
    }
    return NULL;
}
int main()
{
    char* str1;
    char* str2;
    char* str3;
    gets(str1);
    gets(str2);
    str3=mystrstr(str1,str2);
    if(str3==NULL)
      printf("NULL\n");
    else{
        int i;
        while(str3!='\0'){
            printf("%c",*str3);
            str3++;
        }
        printf("\n");
    }
    return 0;
}

