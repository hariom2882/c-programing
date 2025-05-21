#include<stdio.h>
void main(){
int phy;
int che;
int eng;
int age;
int class;
char name[40];
char aname[14];
printf("Enter your college name \n");
scanf("%s",&name);

printf("Enter your name \n");
scanf("%s",&aname);

printf("enter your age\n");
scanf("%d",&age);

printf("enter your class\n");
scanf("%d",&class);

printf("Enter your physics marks \n");
scanf("%d",&phy);

printf("enter your chemistry marks \n");
scanf("%d",&che);

printf("enter your english marks \n");
scanf("%d",&eng);

printf("----------------->%s<-----------------\n",name);
printf("name = %s\n",aname);
printf("age = %d\n",age);
printf("class = %d\n",class);
printf("phy = %d /100\n",phy);
printf("che = %d /100\n",che);
printf("eng = %d /100\n",eng);
 
int sum;
sum=phy+che+eng;
printf("sum = %d+%d+%d=%d\n",phy,che,eng,phy+che+eng);
int avg;
avg=sum/3;
printf("AVG = %d\n",avg);
 
printf(" thank you");


}