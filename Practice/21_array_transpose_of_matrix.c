#include <stdio.h>

int main() {
    int row, col, i, j;

    // Input dimensions of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int matrix[row][col], transpose[col][row];

    // Input elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute the transpose of the matrix
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the transpose matrix
    printf("Transpose of the matrix:\n");
    for (i = 0; i < col; i++) {
        for (j = 0; j < row; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
