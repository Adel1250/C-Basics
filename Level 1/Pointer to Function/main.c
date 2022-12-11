#include <stdio.h>
#include <stdlib.h>

int arrSum(int *arr, int l) {
    int sum;
    for (int i = 0; i < l; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int arr[3] = {1, 2, 5};
    int (*ptr)(int*, int) = &arrSum;
    int sum = (*ptr)(arr, sizeof(arr) / sizeof(int));
    printf("%d", sum);
}
