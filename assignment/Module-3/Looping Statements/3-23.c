#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the Number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)// Calculate the sum of the first n natural numbers 
	{
        sum += i; // Add the current value of i to sum
    }

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

}

