#include <stdio.h>
 #include<stdlib.h>


 struct CSE
 {
     char name[100];
     int roll;
     double cgpa;
 };

 int main()
 {
     struct CSE StudentName[10];
     for(int i=0; i<10; i++)
     {

         scanf("%s %d %lf",&StudentName[i].name,&StudentName[i].roll,&StudentName[i].cgpa);
     }

     printf("Enter student's roll: ");
     int n;
     scanf("%d",&n);
     for(int i=0; i<10; i++)
     {
         if(StudentName[i].roll==n)
         {
             printf("Name : %s\nRoll : %d\nCGPA : %.2lf\n",StudentName[i].name,StudentName[i].roll,StudentName[i].cgpa);
             break;
         }
     }
 }
