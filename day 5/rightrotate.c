#include <stdio.h>
// time O(n)
// space O(n)
void rightRotate(int arr[], int n, int d) {
    int temp[n], i;  // temporary array same size as arr

    // Place each element directly in its rotated position
    for (i = 0; i < n; i++) {
        temp[(i + d) % n] = arr[i];
    }

    // Step 3: Copy temp back to arr
    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2,i;

    rightRotate(arr, n, d);

    printf("Array after right rotation by %d: ", d);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

