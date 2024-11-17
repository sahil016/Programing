//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)



#include <stdio.h>
#include <stdlib.h> 


int main() {
    int number, maxDigit = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    number = abs(number); // Convert the number to its absolute value to handle negative numbers

    if (number == 0)  // If the number is 0, the maximum digit is 0
	{
        maxDigit = 0;
    } else {
        while (number > 0) {
            int digit = number % 10; // Extract the last digit of the number
            if (digit > maxDigit) {
                maxDigit = digit; 
            }
            number /= 10; // Remove the last digit from the number
        }
    }

    printf("Max digit is %d\n", maxDigit);

}

