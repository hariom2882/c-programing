// logical operators
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter the no. a =\n");
    scanf("%d",&a);//1
    
    printf("enter the no. b =\n");
    scanf("%d",&b);//5
printf("enter the no. c=\n");
    scanf("%d",&c);

    printf("%d\n",(b<a) && (b==a));

    printf("%d\n",!(b>a>c) && (a=c));
    printf("%d\n",(b>a) || (b<c));
}