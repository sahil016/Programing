//Write a program in C to count the total number of words in a string.

#include <stdio.h>

int main() {
    char str[100];       
    int i = 0, wordCount = 0; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    while (str[i] != '\0') {
        // Check if the current character is not a space, newline, or tab
        // and if the next character is a space, newline, tab, or end of string
        if ((str[i] != ' ') && (str[i] != '\n') && (str[i] != '\t') &&
            (str[i+1] == ' ' || str[i+1] == '\n' || str[i+1] == '\t' || str[i+1] == '\0')) {
            wordCount++; // Increment word count
        }
        i++; // Move to the next character
    }

    printf("Total number of words: %d\n", wordCount); // Output the word count

}


