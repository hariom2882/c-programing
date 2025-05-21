#include<stdio.h>
int main(){
    int sum=0;
    int arr[]={1,3,5,2,67,432,12,112};
    for (int i = 7; i >=0; i--)
    {
        printf("%d\n",arr[i]);
        sum+=arr[i];
    }
    printf("%d\n",sum);
}
    
    