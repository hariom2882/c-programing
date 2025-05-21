#include<stdio.h>
int main(){
int a=5;
int b=8;
int c=10;                                            
 printf("%d\n",(a|b));
 printf("%d\n",(a&b));
 printf("%d\n",(c&b));
 printf("%d\n",(c&a));
 printf("%d\n",(c|b));
 printf("%d\n",(c|a));           
 printf("%d\n",(c^a));           
 printf("%d\n",~c);           
 printf("%d\n",c<<1);           
 printf("%d\n",c>>1);           
}