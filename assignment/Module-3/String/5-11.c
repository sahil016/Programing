//Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa

#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[100];  // Array to store the input sentence
    int i;  // Loop variable for iterating through the sentence

    printf("Enter a sentence: ");
    
    // Read the sentence from standard input
    // fgets reads up to sizeof(sentence) - 1 characters or until a newline is encountered
    // The newline character is included in the input if it fits
    if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
        // If fgets fails to read input, print an error message and exit with a non-zero status
        printf("Error reading input.\n");
        return 1;
    }

    // Process each character in the sentence to swap cases
    for (i = 0; sentence[i] != '\0'; i++) {
        // Check if the current character is a lowercase letter
        if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            // Convert lowercase to uppercase
            // 'a' - 'A' gives the difference between lowercase and uppercase ASCII values
            // Subtracting this difference converts the lowercase letter to uppercase
            sentence[i] = sentence[i] - ('a' - 'A');
        } 
        // Check if the current character is an uppercase letter
        else if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            // Convert uppercase to lowercase
            // Adding the difference between 'a' and 'A' converts the uppercase letter to lowercase
            sentence[i] = sentence[i] + ('a' - 'A');
        }
        // Non-alphabetic characters are left unchanged
    }

    printf("Modified sentence: %s", sentence);

}

