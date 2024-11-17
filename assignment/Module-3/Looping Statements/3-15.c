//Calculate sum of 10 numbers using of while loop

#include <stdio.h>

int main() {
    int i = 0;
    int sum = 0;
    int num;

    printf("Enter 10 integers:\n");
    while (i < 10) // Loop to read 10 numbers and calculate their sum
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &num);
        sum += num;  // Add the entered number to the sum
        i++; // increment i
    }

    printf("\nSum of the entered numbers = %d\n", sum);

}

