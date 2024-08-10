#include <stdio.h>

int main() {
    int n = 1;
    int top = 0, bottom = 9;
    int left = 0, right = 9;
    int matrix[10][10];

    while (n <= 100) {
        int col;
        for (col = left; col <= right; col++) {
            matrix[top][col] = n++;
        }
        top++;

        int row;
        for (row = top; row <= bottom; row++) {
            matrix[row][right] = n++;
        }
        right--;

        if (top <= bottom) {
            for (col = right; col >= left; col--) {
                matrix[bottom][col] = n++;
            }
            bottom--;
        }

        if (left <= right) {
            for (row = bottom; row >= top; row--) {
                matrix[row][left] = n++;
            }
            left++;
        }
    }

    int row;
    int col;
    for (row = 0; row < 10; row++) {
        for (col = 0; col < 10; col++) {
            printf("%3d ", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}

