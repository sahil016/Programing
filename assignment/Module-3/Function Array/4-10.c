//.WAP to perform Palindrome number using for loop and function
#include <stdio.h>

// Function to check if a number is a palindrome
int Palindrome(int num) {
    int original = num;  
    int reversed = 0;    
    int remainder;       
    
    // Reverse the number
    while (num != 0) {
        remainder = num % 10;           // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        num /= 10;                      // Remove the last digit
    }
    
    return (original == reversed);
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Check if the number is a palindrome and print the result
    if (Palindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
    
}

