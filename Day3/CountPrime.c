#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j, count = 0;
    
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++) { 
        int isPrime = 1;

        
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = 0;
                break; 
            }
        }

        if (!isPrime) {
            continue; 
        }

        count++; 
    }

    printf("Number of primes less than %d: %d\n", n, count);
    return 0;
}

