//Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include <stdio.h>

int main() {
    char str[100]; 
    int alphabets = 0, digits = 0, specialChars = 0; 
    int i = 0; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    // Loop through the string until the null terminator is encountered
    while (str[i] != '\0') {
        // Check if the current character is an alphabet (either uppercase or lowercase)
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            alphabets++; // Increment the alphabet counter
        }
        // Check if the current character is a digit
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++; // Increment the digit counter
        }
        // Check if the current character is a special character (not a newline, space, or tab)
        else if (str[i] != '\n' && str[i] != ' ' && str[i] != '\t' && str[i] != '\0') {
            specialChars++; // Increment the special character counter
        }
        i++; // Move to the next character in the string
    }

    printf("Total alphabets: %d\n", alphabets); // Print the number of alphabets
    printf("Total digits: %d\n", digits); // Print the number of digits
    printf("Total special characters: %d\n", specialChars); // Print the number of special characters

}

