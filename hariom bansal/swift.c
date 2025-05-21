#include <stdio.h>
int main() {
      printf("1.ADD\n");
      printf("2.calculation\n");
      printf("3.square\n");
      printf("4.multiplication\n");
     
      int a;    
      int b;
      int c;
     int d;
     char ch;
      int a1=2;
      switch(a1)
      {
      case 1:
           printf("enter the first no.\n");
           scanf("%d",&a);
           printf("enter the second no.\n");
           scanf("%d",&b);
           printf("addition of %d and %d is %d\n",a,b,a+b);
              break;
       
       case 2:
           
     
               printf("Enter the first  no.\n");
               scanf("%d",&c);
   
               printf(" + , - , * , /     \n");
   
               printf("Enter Your Choose : \n");
               scanf(" %c",&ch);
   
               printf("Enter the Sec  no.\n");
               scanf("%d",&d);
       
           switch(ch){
           case '+':
               printf("%d+%d=%d\n",c,d,(c+d));
               break;  
   
           case '-':
           printf("%d-%d=%d\n",c,d,(c-d));
               break;
           
           case '*':
           printf("%d*%d=%d\n",c,d,(c*d));
               break;
   
           case '/':
               printf("%d/%d=%d\n",c,d,(c/d));
               break;

                default:
               printf("no\n");
               break;
               }
               break;
        
        case 3:
            printf("enter the  no.\n");
            scanf("%d",&a);
            printf("%d\n",a*a);
            break;
        
        case 4:
        printf("enter the first no.\n");
        scanf("%d",&a);
        printf("enter the second no.\n");
        scanf("%d",&b);
        printf("%d*%d=%d\n",a,b,a*b);
        
            
          
      default:
        break;
      }

}