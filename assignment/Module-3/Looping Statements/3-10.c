//Write a program you have to make a summation of first and last Digit


#include <stdio.h>
#include <stdlib.h> // For abs() function

int main() {
    int number, firstDigit, lastDigit, temp;

    printf("Enter a number: ");
    scanf("%d", &number);

    number = abs(number);

    lastDigit = number % 10;

    temp = number;
    while (temp >= 10) {
        temp /= 10;
    }
    firstDigit = temp;

    int sum = firstDigit + lastDigit;

    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    printf("Sum of first and last digits: %d\n", sum);

}

