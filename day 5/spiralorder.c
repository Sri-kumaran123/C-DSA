#include <stdio.h>

int main() {
    int rows, cols, i, top = 0, left = 0;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    int bottom = rows - 1;
    int right = cols - 1;

    printf("\nSpiral Order:\n");

    while (top <= bottom && left <= right) {
        // Traverse top row
        for (i = left; i <= right; i++)
            printf("%d ", matrix[top][i]);
        top++;

        // Traverse right column
        for (i = top; i <= bottom; i++)
            printf("%d ", matrix[i][right]);
        right--;

        // Traverse bottom row (if any)
        if (top <= bottom) {
            for (i = right; i >= left; i--)
                printf("%d ", matrix[bottom][i]);
            bottom--;
        }

        // Traverse left column (if any)
        if (left <= right) {
            for (i = bottom; i >= top; i--)
                printf("%d ", matrix[i][left]);
            left++;
        }
    }

    return 0;
}

