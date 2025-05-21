#include<stdio.h>
int main(){
    int a=2;
    int i;
    int sum=0;
    int sum1=0;
    int sum2=0;
    for ( i = 1; i <=10; i++)
    {
        if (a*i%2==0)
       { 
       printf("%d*%d=%d  even \n",a,i,a*i);
       }

       else{
        printf("odd");
       }

       if (a%2==0)
       {
        printf("even    ");
       }

       else{
        printf("odd");

       }
           
       sum=sum+a;
       sum1=sum1+i;
       sum2=sum2+i*2;
       
       

    }
 printf("%d*%d=%d\n",sum,sum1,sum2);
 if (sum%2==0)
 {
    printf("even   ");
 }
 else{
    printf("   odd");
 }
 if (sum1%2==0)
 {
    printf("    even     ");
 }
 else{
    printf("    odd    ");
 }
 if (sum2%2==0)
 {
    printf("   even    ");
 }
 else{
    printf("    odd   ");
 }
 
}
                               