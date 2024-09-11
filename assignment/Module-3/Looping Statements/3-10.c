//Write a program you have to make a summation of first and last Digit


#include <stdio.h>
#include <stdlib.h> // For abs() function

int main() {
    int number, firstDigit, lastDigit, temp;

    printf("Enter a number: ");
    scanf("%d", &number);

    number = abs(number);	// Convert the number to its absolute value to handle negative numbers

    lastDigit = number % 10;  // Find the last digit of the number

    temp = number; // Initialize temp to the absolute number to find the first digit
    while (temp >= 10) // Loop to find the first digit
	{
        temp /= 10; // Remove the last digit
    }
    firstDigit = temp; // After the loop, temp will hold the first digit

    int sum = firstDigit + lastDigit;

    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    printf("Sum of first and last digits: %d\n", sum);

}

