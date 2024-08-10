//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array


#include <stdio.h>

#define MAX 3  // Fixed size for the matrix

int main() {
    int matrixA[MAX][MAX], matrixB[MAX][MAX], result[MAX][MAX];
    int i, j, k;
    
    // Input Matrix A
    printf("Enter elements for Matrix A (%d x %d):\n", MAX, MAX);
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    // Input Matrix B
    printf("Enter elements for Matrix B (%d x %d):\n", MAX, MAX);
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Addition
    printf("Matrix A + Matrix B:\n");
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            result[i][j] = matrixA[i][j] + matrixB[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Subtraction
    printf("Matrix A - Matrix B:\n");
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            result[i][j] = matrixA[i][j] - matrixB[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Multiplication
    printf("Matrix A * Matrix B:\n");
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            result[i][j] = 0;
            for (k = 0; k < MAX; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

