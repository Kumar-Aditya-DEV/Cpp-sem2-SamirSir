#include <cstdio>

void averageCheck(int arr[]) {
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        sum = sum + arr[i];
    }

    float avg = sum / 5.0;

    printf("Average = %.2f\n", avg);

    for(int i = 0; i < 5; i++) {
        if(arr[i] >= avg) {
            printf("Index: %d Value: %d\n", i, arr[i]);
        }
    }
}


int main() {
    int arr[5];

    printf("Enter 5 numbers:\n");

    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    averageCheck(arr);

    return 0;
}
