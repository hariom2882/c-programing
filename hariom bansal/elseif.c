#include<stdio.h>
int main(){
    int a;
    int b;
    printf("enter 2 number \n");
    scanf("%d",&a);//25
    scanf("%d",&b);//25

    if (a>b){
        printf("%d is greater than %d\n",a,b);
       
    //    else {
    //         printf("no");
        // }
    }
    else if(a<b) {
         printf("%d is greater than %d\n",b,a);
    }
    else{
    printf("both condition are false\n");
    }
}