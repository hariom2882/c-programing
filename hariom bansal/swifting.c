#include <stdio.h>
 int main(){
    int c;
    int d;
    char ch;
    
    printf("Enter the first  no.\n");
    scanf("%d",&c);

    printf(" + , - , * , /     \n");

    printf("Enter Your Choose : \n");
    scanf(" %c",&ch);

    printf("Enter the Sec  no.\n");
    scanf("%d",&d);

    switch(ch){
        case '+':
            printf("%d+%d=%d",c,d,(c+d));
            break;  

        case '-':
        printf("%d-%d=%d",c,d,(c-d));
            break;
        
        case '*':
        printf("%d*%d=%d",c,d,(c*d));
            break;

        case '/':
            printf("%d/%d=%d",c,d,(c/d));
            break;

        default:
            printf("noo");
            break;
            
        }
 }