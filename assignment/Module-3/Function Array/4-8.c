//WAP to reverse a string and check that the string is palindrome or not



#include <stdio.h>

int main() {
    char str[100], reversed[100];
    int length = 0, i, isPalindrome = 1;

    printf("Enter the Number: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0') {
        length++;
    }

    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    for (i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0';

    printf("Reversed string: %s\n", reversed);

    for (i = 0; i < length; i++) {
        if (str[i] != reversed[i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

