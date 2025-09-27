#include <stdio.h>

void moveZeroes(int *arr, int n) {
    int *ptr = arr;      // pointer to array
    int *lastNonZero = arr;  // points to the position to place next non-zero
	int i;
    for (i = 0; i < n; i++, ptr++) {
        if (*ptr != 0) {
            *lastNonZero = *ptr;   // place non-zero element at lastNonZero
            if (lastNonZero != ptr)
                *ptr = 0;          // set current pointer to 0
            lastNonZero++;
        }
    }
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
	int i;
    moveZeroes(arr, n);

    printf("Array after moving zeroes: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

