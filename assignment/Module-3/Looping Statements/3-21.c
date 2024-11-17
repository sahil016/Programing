#include <stdio.h>

int main() {
    int numbers[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 3; i++) {
        int num = numbers[i]; // Current number to check
        int reversed = 0; // Variable to store the reversed number
        int original = num; // Original number to compare later
        int remainder; // Variable to store the remainder when dividing by 10

        while (num != 0) {
            remainder = num % 10; // Get the last digit
            reversed = reversed * 10 + remainder; // Append last digit to reversed number
            num /= 10; // Remove the last digit from the original number
        }

        if (original == reversed) {
            printf("%d is a palindrome.\n", original);
        } else {
            printf("%d is not a palindrome.\n", original);
        }
    }

}

