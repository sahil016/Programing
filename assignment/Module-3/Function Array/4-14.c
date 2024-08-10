//Perform 2D matrix array


#include <stdio.h>

int main() {
    int rows = 2, cols = 3;
    int matrix[2][3];
    int rowSum[2] = {0, 0};
    int colSum[3] = {0, 0, 0};
    int i, j;

    printf("Enter the elements of a %dx%d matrix:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nRow sums:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
        printf("Sum of row %d: %d\n", i, rowSum[i]);
    }

    printf("\nColumn sums:\n");
    for (j = 0; j < cols; j++) {
        for (i = 0; i < rows; i++) {
            colSum[j] += matrix[i][j];
        }
        printf("Sum of column %d: %d\n", j, colSum[j]);
    }

}

