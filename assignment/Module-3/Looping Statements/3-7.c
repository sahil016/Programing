//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746



#include <stdio.h>

int main() {
    int number, reversed = 0, original;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    if (number < 0) {
        printf("Reversing negative numbers is not supported in this program.\n");
        return 1;
    }

    while (number != 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10; 
    }

    printf("Original number: %d\n", original);
    printf("Reversed number: %d\n", reversed);

}

