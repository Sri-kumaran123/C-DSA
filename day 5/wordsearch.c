#include <stdio.h>
#include <string.h>

#define MAX 20

int main() {
    int rows, cols;
    char word[MAX];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    char grid[rows][cols];
    printf("Enter the character grid:\n");
    int i,j;
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf(" %c", &grid[i][j]);  // note the space before %c

    printf("Enter word to search: ");
    scanf("%s", word);

    int len = strlen(word);
    int found = 0;

    // Horizontal and vertical search
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {

            // Check horizontal (right)
            if (j + len <= cols) {
                int k;
                for (k = 0; k < len; k++)
                    if (grid[i][j + k] != word[k])
                        break;
                if (k == len) {
                    found = 1;
                    break;
                }
            }

            // Check vertical (down)
            if (i + len <= rows) {
                int k;
                for (k = 0; k < len; k++)
                    if (grid[i + k][j] != word[k])
                        break;
                if (k == len) {
                    found = 1;
                    break;
                }
            }
        }
        if (found)
            break;
    }

    if (found)
        printf("Word \"%s\" found in the grid!\n", word);
    else
        printf("Word \"%s\" NOT found in the grid.\n", word);

    return 0;
}


/*
    Enter number of rows and columns: 3 4
Enter the character grid:
a b c d
e f g h
i j k l
Enter word to search: fg

*/
