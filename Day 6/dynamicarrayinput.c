#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", arr + i);
    }

    printf("Array elements: ");
    for (i = 0; i < n; i++)
        printf("%d ", *(arr + i));

    free(arr);
    return 0;
}

