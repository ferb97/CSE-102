#include<stdio.h>
typedef struct
{
    double real;
    double complex;
}number;
void print(number z)
{
    if(z.complex>=0)
      printf("%.2lf+%.2lfi\n",z.real,z.complex);
    else
      printf("%.2lf%.2lfi\n",z.real,z.complex);
}
number complexmultiply(number x,number y)
{
    number z;
    z.real=x.real*y.real-x.complex*y.complex;
    z.complex=x.real*y.complex+x.complex*y.real;
    return z;
}
number complexdivide(number x,number y)
{
    number z;
    z.real=x.real*y.real+x.complex*y.complex;
    z.complex=x.complex*y.real-x.real*y.complex;
    z.real/=(y.real*y.real+y.complex*y.complex);
    z.complex/=(y.real*y.real+y.complex*y.complex);
    return z;
}
int main()
{
    number num1,num2,num3,num4;
    scanf("%lf%lf%lf%lf",&num1.real,&num1.complex,&num2.real,&num2.complex);
    num3=complexmultiply(num1,num2);
    print(num3);
    num4=complexdivide(num1,num2);
    print(num4);
    return 0;
}
