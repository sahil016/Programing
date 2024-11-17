//WAP program to print below output using for loop

#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 10;
    int i, j;

    for (i = 0; i < rows; i++) // Loop through each row
	{
        for (j = 0; j < cols; j++)// Loop through each column in the current row
		{
            printf("%02d ", i * cols + j + 1);
        }
        printf("\n");
    }

    return 0;
}

