#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, root1, root2;

    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation.\n");
        return 0;
    }

    D = b*b - 4*a*c; 

    if (D > 0) { // Real and distinct
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);
        printf("Roots are real and distinct: %.2f, %.2f\n", root1, root2);
    } 
    else if (D == 0) { // Real and equal
        root1 = -b / (2*a);
        printf("Roots are real and equal: %.2f, %.2f\n", root1, root1);
    } 
    else { // Imaginary roots
        printf("Roots are imaginary: %.2f + %.2fi, %.2f - %.2fi\n",
               -b/(2*a), sqrt(-D)/(2*a), -b/(2*a), sqrt(-D)/(2*a));
    }

    return 0;
}

