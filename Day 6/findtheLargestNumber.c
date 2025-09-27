#include <stdio.h>

int main() {
    int arr[] = {5, 10, 2, 8, 7};
    int *p = arr; // pointer to array
    int max = *p;
	int i;
    for (i = 1; i < 5; i++) {
        if (*(p + i) > max)
            max = *(p + i);
    }
    printf("Largest element: %d\n", max);
    return 0;
}

