#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible! Columns of first must equal rows of second.\n");
        return 0;
    }

    int mat1[r1][c1], mat2[r2][c2], result[r1][c2];

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    int i, j;
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &mat1[i][j]);

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &mat2[i][j]);

    // Initialize result matrix with 0
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            result[i][j] = 0;

    // Matrix multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Print result
    printf("\nResultant matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}

