#include <stdio.h>

#define MAX 1000  // adjust depending on input range

int main() {
    int n, i, num;
    int freq[MAX] = {0};  // hash array initialized to 0

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        freq[num]++;   // count occurrence
    }

    printf("\nElement | Frequency\n");
    for (i = 0; i < MAX; i++) {
        if (freq[i] > 0) {
            printf("   %d     |    %d\n", i, freq[i]);
        }
    }

    return 0;
}

