//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746



#include <stdio.h>

int main() {
    int number, reversed = 0, original;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number; // Store the original number for later use

    if (number < 0) {
        printf("Reversing negative numbers is not supported in this program.\n");
        return 1;
    }

    while (number != 0)  // Loop to reverse the digits of the number
	{
        int digit = number % 10;
        reversed = reversed * 10 + digit; // Add the digit to the reversed number after shifting the current reversed number
        number /= 10; // Remove the last digit from the number
    }

    printf("Original number: %d\n", original);
    printf("Reversed number: %d\n", reversed);

}

