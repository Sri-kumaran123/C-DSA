#include <stdio.h>
int main() {
    int x = 10;
    int *p = &x;
    int **pp = &p;

    printf("Value of x: %d\n", **pp); // 10
    **pp = 20;
    printf("New value of x: %d\n", x); // 20
    return 0;
}

