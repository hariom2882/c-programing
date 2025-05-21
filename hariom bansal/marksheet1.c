// mark sheet
#include <stdio.h>
int main() {
   char chr[40];
    int age;
    int math;
    int phy;
    int che;
    int eng;
    int phe;
    char ab[100];

    printf("enter the college name"); 
    scanf("%s",&ab);
    
    printf("enter the Name  ");
     scanf("%s",&chr);



     printf(" enter the age  ");                                                     
     scanf("%d",&age);

     printf("enter the math no.");
     scanf("%d", &math);

     printf("enter the Phy no.");
     scanf("%d", &phy);

     printf("enter the Che no.");
     scanf("%d", &che);

     printf("enter the eng no.");
     scanf("%d",&eng);

     printf("enter the phe no.");
     scanf("%d",&phe);

     printf("-------------------\n");

     printf("hello %s\n",chr);
     printf(" %s\n",ab);

     printf("math marks  %d\n",math);
     printf("Phy  marks  %d\n",phy);
     printf("che  marks  %d\n",che);
    
     printf("eng marks   %d\n",eng);
     printf("phe marks   %d\n",phe);
     
     printf("-------------------\n");
    
     int sum=math+che+phy+eng+phe;
     printf("sum of marks %d \n",sum);
     int avg=(sum/5);
     printf("avg of marks %d \n",avg);
     printf("avg of marks  %d / 500",sum);

    return 0;
}