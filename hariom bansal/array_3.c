#include <stdio.h>

void main() {
    int count = 0;
    int count1 = 0;
    int count2 = 0;
    int arr[] = {0, 1, 0, 2, 2};

    for (int i = 0; i <= 4; i++) {
        if (arr[i] == 0) {
            count++;
        }
    }

    for (int j = 0; j <= 4; j++) {
        if (arr[j] == 1) {
            count1++;
        }
    }

    for (int a = 0; a <= 4; a++) {
        if (arr[a] == 2) {
            count2++;
        }
    }

    printf("no.0 = %d\n", count);
    printf("no.1 = %d\n", count1);
    printf("no.2 = %d\n", count2);
}
