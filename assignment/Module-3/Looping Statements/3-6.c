//WAP to print Fibonacci series up to given numbers


#include <stdio.h>

int main() {
    int num;
    int a = 0, b = 1, next;

    printf("Enter the maximum value for Fibonacci series: ");
    scanf("%d", &num);

    if (num < 0)// Handle negative input
	{
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    printf("Fibonacci series up to %d: ", num);

    if (num >= 0) {
        printf("%d ", a);
    }

    while (b <= num) // Generate and print the Fibonacci series while the next number is less than or equal to num
	{
        printf("%d ", b);
        next = a + b;   // Calculate the next Fibonacci number
        a = b;   // Update a and b for the next iteration
        b = next;
    }

    printf("\n");
}

