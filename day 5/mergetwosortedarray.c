#include <stdio.h>

// time O(n1 + n2)
// space O(n1 + n2)

void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int i = 0, j = 0, k = 0;

    // Merge both arrays
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1
    while (i < n1) {
        result[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2
    while (j < n2) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int result[n1 + n2];  // merged array

    mergeSortedArrays(arr1, n1, arr2, n2, result);

    printf("Merged Sorted Array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

