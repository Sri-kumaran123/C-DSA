#include <stdio.h>
#include <limits.h>  // for INT_MIN

// 32-bit int:

// INT_MIN = -2147483648

// INT_MAX = 2147483647

// 16-bit int (older systems):

// INT_MIN = -32768

// INT_MAX = 32767

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return -1;
    }

    int first = INT_MIN, second = INT_MIN, i;

    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            // Update both first and second
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) {
            // Update only second
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("No second largest element (all elements are same).\n");
        return -1;
    }

    return second;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findSecondLargest(arr, n);

    if (result != -1) {
        printf("Second largest element is: %d\n", result);
    }

    return 0;
}

