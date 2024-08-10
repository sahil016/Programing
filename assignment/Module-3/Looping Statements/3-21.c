#include <stdio.h>

int main() {
    int numbers[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 3; i++) {
        int num = numbers[i];
        int reversed = 0;
        int original = num;
        int remainder;

        while (num != 0) {
            remainder = num % 10;
            reversed = reversed * 10 + remainder;
            num /= 10;
        }

        if (original == reversed) {
            printf("%d is a palindrome.\n", original);
        } else {
            printf("%d is not a palindrome.\n", original);
        }
    }

}

