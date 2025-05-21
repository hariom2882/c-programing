#include <stdio.h>
int main() {
    int arr[] = {1, 3, 5, 2, 67, 432, 12, 112};
    
    int min =arr[0];
    int max =0;
    for (int i = 0; i <=7; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
           max = arr[i];
        }
    }
    
   printf("Sabse bada number: %d\n",min);
   printf("Sabse bada number: %d\n",max);

    return 0;
}
