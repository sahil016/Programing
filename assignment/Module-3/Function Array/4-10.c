//.WAP to perform Palindrome number using for loop and function


#include <stdio.h>

int Palindrome(int num) {
    int original = num;
    int reversed = 0;
    int remainder;
    
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    return (original == reversed);
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (Palindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
    
}

