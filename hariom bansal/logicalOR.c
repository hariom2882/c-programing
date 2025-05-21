#include<stdio.h>
void main(){
    int a;
    int b;
     scanf("%d",&a);//5
     scanf("%d",&b);//4
       printf("%d\n",(a<b)||(b>a));//0
       printf("%d\n",(a==b)||(b<a));
       printf("%d\n",(a>b)||(b<a));
       printf("%d\n",(a<b)||(b<a));
}