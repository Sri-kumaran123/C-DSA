#include <stdio.h>

// time o(n)
// space o(1)
int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;

    int i = 0,j;  // index for unique elements

    for (j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j]; // move unique element forward
        }
    }
    return i + 1; // new length
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newLength = removeDuplicates(arr, n);

    printf("Array after removing duplicates: ");
    int i;
    for (i = 0; i < newLength; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nNew length: %d\n", newLength);

    return 0;
}

