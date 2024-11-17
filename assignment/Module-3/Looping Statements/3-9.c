//Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include <stdio.h>
#include <stdlib.h> 

int main() {
    int number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    number = abs(number);	 // Convert the number to its absolute value to handle negative numbers

    while (number > 0) // Loop to process each digit of the number
	{
        int digit = number % 10; 
        sum += digit; // Add the digit to the sum
        number /= 10;   // Remove the last digit from the number
    }

    printf("Sum of the digits is %d\n", sum);

}

