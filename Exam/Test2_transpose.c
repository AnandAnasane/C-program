#include <stdio.h>

int main() {
    int row, col, i, j;

    printf("number of rows: ");
    scanf("%d", &row);
    printf("number of columns: ");
    scanf("%d", &col);

    int matrix[row][col], transpose[col][row];

    printf("Enter elements:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transpose is:\n");
    for (i = 0; i < col; i++) {
        for (j = 0; j < row; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
