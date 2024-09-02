//WAP to reverse a string and check that the string is palindrome or not



#include <stdio.h>

int main() {
    char str[100], reversed[100];
    int length = 0, i, isPalindrome = 1;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Remove newline character if present
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    // Reverse the string
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0'; // Null-terminate the reversed string

    // Output the reversed string
    printf("Reversed string: %s\n", reversed);

    // Check if the original string is a palindrome
    for (i = 0; i < length; i++) {
        if (str[i] != reversed[i]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    // Output whether the string is a palindrome or not
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0; 
}
}

