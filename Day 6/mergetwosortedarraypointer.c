#include <stdio.h>
#include <stdlib.h>

void mergeArrays(int *arr1, int n1, int *arr2, int n2, int *merged) {
    int *p1 = arr1;          // pointer for arr1
    int *p2 = arr2;          // pointer for arr2
    int *pMerged = merged;   // pointer for merged array

    int *end1 = arr1 + n1;
    int *end2 = arr2 + n2;

    // Merge arrays
    while(p1 < end1 && p2 < end2) {
        if(*p1 < *p2) {
            *pMerged = *p1;
            p1++;
        } else {
            *pMerged = *p2;
            p2++;
        }
        pMerged++;
    }

    // Copy remaining elements
    while(p1 < end1) {
        *pMerged = *p1;
        p1++;
        pMerged++;
    }

    while(p2 < end2) {
        *pMerged = *p2;
        p2++;
        pMerged++;
    }
}

int main() {
    int arr1[] = {1,2,4};
    int arr2[] = {1,3,4};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    int merged[n1 + n2];

    mergeArrays(arr1, n1, arr2, n2, merged);

    printf("Merged Array: ");
    int i;
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", merged[i]);
    printf("\n");

    return 0;
}

