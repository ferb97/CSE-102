#include<stdio.h>
int main()
{
    int x=5,y;
    int *p;
    p=&x;
    y=*p;
    printf("%d\n",y);
    return 0;
}
