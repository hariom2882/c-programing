#include<stdio.h>
int main(){
    int arr[3][3][3]={
        {12,23},
        {2,43},
        {4,5}
    };
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j<2; j++)
        {
            printf("%d\n",arr[i][j]);
            
        }
        
    }
    
}