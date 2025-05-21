#include<stdio.h>
int main(){
    int arr[]={1,3,5,2,67,432,12,112};
    for (int i = 7; i >=0; i--)
    {
        printf("%d\n",arr[i]);
    }
    printf("------------------------\n");
    for (int i = 0; i <=7; i++)
    {
        printf("%d\n",arr[i]);
    }
 
    // printf("%d\n",arr[0]);
    // printf("%d\n",arr[1]);
    // printf("%d\n",arr[2]);
    // printf("%d\n",arr[4]);
    // printf("%d\n",arr[5]);
}