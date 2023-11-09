#include<stdio.h>
#include<string.h>
int r1,c1,r2,c2,matA[6][6],matB[6][6],fA=0,fB=0;
void outputA()
{
    int i,j;
    //printf("%d %d\n",r1,c1);
     for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d ",matA[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void outputB()
{
    int i,j;
     for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("%d ",matB[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void additionAB()
{
    int i,j;
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d ",matA[i][j]+matB[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void subtractionAB()
{
    int i,j;
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d ",matA[i][j]-matB[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void subtractionBA()
{
    int i,j;
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d ",matB[i][j]-matA[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void multiplicationAB()
{
    int i,j,k;
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            int sum=0;
            for(k=0;k<c1;k++){
                sum+=matA[i][k]*matB[k][j];
            }
            printf("%d ",sum);
        }
        printf("\n");
    }
    printf("\n");
}
void multiplicationBA()
{
    int i,j,k;
    for(i=0;i<r2;i++){
        for(j=0;j<c1;j++){
            int sum=0;
            for(k=0;k<c2;k++){
                sum+=matB[i][k]*matA[k][j];
            }
            printf("%d ",sum);
        }
        printf("\n");
    }
    printf("\n");
}
void transposeA()
{
    int i,j;
    for(i=0;i<c1;i++){
        for(j=0;j<r1;j++){
            printf("%d ",matA[j][i]);
        }
        printf("\n");
    }
    printf("\n");
}
void transposeB()
{
    int i,j;
    for(i=0;i<c2;i++){
        for(j=0;j<r2;j++){
            printf("%d ",matB[j][i]);
        }
        printf("\n");
    }
    printf("\n");
}
void divisionA(int n)
{
    int i,j;
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%.1f ",matA[i][j]/(n*1.0));
        }
        printf("\n");
    }
    printf("\n");
}
void divisionB(int n)
{
    int i,j;
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("%.1f ",matB[i][j]/(n*1.0));
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    int r1,c1,r2,c2;
    char str1[20]="INA",
         str2[20]="INB",
         str3[20]="OUTA",
         str4[20]="OUTB",
         str5[20]="A+B",
         str6[20]="B+A",
         str7[20]="A-B",
         str8[20]="B-A",
         str9[20]="A*B",
         str10[20]="B*A",
         str11[20]="DETA",
         str12[20]="DETB",
         str13[20]="TRANSA",
         str14[20]="TRANSB",
         str15[20]="EXIT";
     while(1){
        //printf("%d %d\n",r1,c1);
        char command[100];
        gets(command);
        //printf("%d %d %d %d\n",r1,r2,c1,c2);
        int i,j=0;
        int n=strlen(command);
        for(i=0;i<n;i++){
            if(command[i]==' ')
              continue;
            else if(command[i]>='a'&&command[i]<='z'){
               command[i]-=32;
               command[j]=command[i];
               j++;
            }
            else{
                command[j]=command[i];
                j++;
            }
        }
        command[j]='\0';
        //printf("%s\n",command);
        if(strcmp(str1,command)==0){
           fA=1;
           scanf("%d%d",&r1,&c1);
           for(i=0;i<r1;i++){
               for(j=0;j<c1;j++){
                  scanf("%d",&matA[i][j]);
               }
           }
        }
        else if(strcmp(str2,command)==0){
           fB=1;
           scanf("%d%d",&r2,&c2);
           for(i=0;i<r2;i++){
               for(j=0;j<c2;j++){
                  scanf("%d",&matB[i][j]);
               }
           }
        }
        else if(strcmp(str3,command)==0){
           if(fA==0)
             printf("No A Matrix found\n");
           else{
               for(i=0;i<r1;i++){
                  for(j=0;j<c1;j++){
                     printf("%d ",matA[i][j]);
                  }
                  printf("\n");
               }
               printf("\n");
           }
        }
        else if(strcmp(str4,command)==0){
            if(fB==0)
              printf("No B Matrix found\n");
            else{
               for(i=0;i<r2;i++){
                  for(j=0;j<c2;j++){
                     printf("%d ",matB[i][j]);
                  }
                  printf("\n");
               }
               printf("\n");
           }
        }
        else if(strcmp(str5,command)==0||strcmp(str6,command)==0){
            //printf("%d %d %d %d %d %d\n",fA,fB,r1,r2,c1,c2);
            if(fA==1&&fB==1&&r1==r2&&c1==c2)
               additionAB();
            else
               printf("Addition not possible\n");
        }
        else if(strcmp(str7,command)==0){
            if(fA==1&&fB==1&&r1==r2&&c1==c2)
              subtractionAB();
            else
               printf("Subtraction not possible\n");
        }
        else if(strcmp(str8,command)==0){
            if(fA==1&&fB==1&&r1==r2&&c1==c2)
              subtractionBA();
            else
              printf("Subtraction not possible\n");
        }
        else if(strcmp(str9,command)==0){
            if(fA==1&&fB==1&&r2==c1)
              multiplicationAB();
            else
              printf("Multiplication not possible\n");
        }
        else if(strcmp(str10,command)==0){
            if(fA==1&&fB==1&&r1==c2)
               multiplicationBA();
            else
               printf("Multiplication not possible\n");
        }
        else if(strcmp(str13,command)==0){
            if(fA==1)
              transposeA();
            else
              printf("Transpose not possible\n");
        }
        else if(strcmp(str14,command)==0){
            if(fB==1)
              transposeB();
            else
              printf("Transpose not possible\n");
        }
        else if(strcmp(str15,command)==0)
            break;
        //printf("%d %d\n",r1,c1);
     }
     return 0;
}

