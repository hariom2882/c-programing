#include<stdio.h>
int main(){
    int sum=0;
    int arr[]={1,5,6,9,11};
    printf("0-->%d\n",arr[0]);
    printf("1-->%d\n",arr[1]);
    printf("2-->%d\n",arr[2]);
    printf("3-->%d\n",arr[3]);
    printf("4-->%d\n",arr[4]);
    for (int i = 0; i <=4; i++)
    {
        printf("%d\n",arr[i]);
        sum+=i;
        i++;
    }
    printf("%d",sum);
    // printf("------------------------\n");
    // for (int i = 0; i <=7; i++)
    // {
    //     printf("%d\n",arr[i]);
    // }
}