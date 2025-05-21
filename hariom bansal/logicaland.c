#include<stdio.h>
void main(){
    int a  ;
    int b  ;
     scanf("%d",&a);
     scanf("%d",&b);
       printf("%d\n",(a<b)&&(b>a));
       printf("%d\n",(a=b)&&(b<a));
       printf("%d\n",(a>b)&&(b<a));
       printf("%d\n",(a<b)&&(b<a));

}