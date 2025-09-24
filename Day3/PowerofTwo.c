#include <stdio.h>

int main() {
    unsigned int n;
    int isPowerOfTwo = 1;

    printf("Enter a positive integer: ");
    scanf("%u", &n);

    if (n == 0) {
        isPowerOfTwo = 0; 
    } else {
        do {
            if (n % 2 != 0 && n != 1) { 
                isPowerOfTwo = 0;
                break;
            }
            n /= 2; 
        } while (n > 1);
    }

    if (isPowerOfTwo)
        printf("The number is a power of two.\n");
    else
        printf("The number is NOT a power of two.\n");

    return 0;
}

