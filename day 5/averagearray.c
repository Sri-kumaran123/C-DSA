#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  // array of size n

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // add to sum
    }

    average = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}

