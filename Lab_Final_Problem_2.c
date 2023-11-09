#include<stdio.h>
struct marks
{
    int roll;
    int sub1;
    int sub2;
    int sub3;
};
int main()
{
    struct marks students[31];
    int i,highest_sub1=0,highest_sub2=0,highest_sub3=0,highest_total =0;
    for(i=0;i<30;i++){
        printf("Enter student info : ");
        scanf("%d%d%d%d",&students[i].roll,&students[i].sub1,&students[i].sub2,&students[i].sub3);
        if(students[i].sub1>highest_sub1)
        {
            highest_sub1 = students[i].sub1;
        }
        if(students[i].sub2>highest_sub2)
        {
            highest_sub2 = students[i].sub2;
        }
        if(students[i].sub3>highest_sub3)
        {
            highest_sub3 = students[i].sub3;
        }
    }
    for(i=0;i<30;i++){
        printf("Total marks obtained by roll no %d is %d\n" , students[i].roll,students[i].sub1+students[i].sub2+students[i].sub3);
        if(students[i].sub1+students[i].sub2+students[i].sub3>highest_total)
        {
            highest_total = students[i].sub1+students[i].sub2+students[i].sub3;
        }
    }
    printf("The highest mark in sub1 is %d\n",highest_sub1);
    printf("The roll no : \n");
    for(i=0;i<30;i++){
        if(students[i].sub1 == highest_sub1)
        {
            printf("%d\n",students[i].roll);
        }
    }
    printf("The highest mark in sub2 is %d\n",highest_sub2);
    printf("The roll no : \n");
    for(i=0;i<30;i++){
        if(students[i].sub2 == highest_sub2)
        {
            printf("%d\n",students[i].roll);
        }
    }
    printf("The highest mark in sub3 is %d\n",highest_sub3);
    printf("The roll no : \n");
    for(i=0;i<30;i++){
        if(students[i].sub3 == highest_sub3)
        {
            printf("%d\n",students[i].roll);
        }
    }
    printf("The roll no of the students obtaining highest total marks : \n");
    for(i=0;i<30;i++){
        if(highest_total == students[i].sub1+students[i].sub2+students[i].sub3)
        {
            printf("%d\n",students[i].roll);
        }
    }
    return 0;
}
