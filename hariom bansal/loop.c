#include <stdio.h>
int main(){
    int n;
    int i;
    int sum=0;
    int sum1=0;
    int sum2=0;
    printf("enter the no. n= \n");
    scanf("%d",&n);
    // printf("enter the no. i=\n");
    // scanf("%d",&i);
    for(int i=1;i<=10;i++){
        sum=sum+i;
        sum1=sum1+n;
        sum2=sum2+n*i;
        // printf("%d\n",sum);
        printf("%d*%d=%d\n",i,n,i*n);
   }
   printf("%d * %d = %d ",sum1,sum,sum2);

   if (sum1%2==0)
   {
       printf(" even no. is %d\n",sum1);
   }
   else{
       printf(" odd no\n");
   }
    
   if (sum%2==0)
   {
       printf(" even no. is %d\n",sum);
   }
   else{
       printf(" odd no\n");
   }
   if (sum2%2==0)
   {
       printf(" even no. is %d\n",sum2);
   }
   else{
       printf(" odd no\n");
   }
    
    
    
}