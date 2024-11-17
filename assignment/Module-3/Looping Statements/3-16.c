//Calculate the Sum of Natural Numbers Using the While Loop


#include <stdio.h>

int main() {
    int n;       
    int sum = 0; 
    int i = 1;   

    printf("Enter a Number: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
    } else {
        while (i <= n) // Loop to calculate the sum of natural numbers from 1 to n
		{
            sum += i; // Add the current value of i to the sum
            i++; // increament i
        }
        printf("Sum of natural numbers up to %d = %d\n", n, sum);
    }
}

