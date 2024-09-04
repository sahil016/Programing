//Write a program in C to find the maximum number of characters in a string.


#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};  // Array to store frequency of each ASCII character
    int maxFreq = 0;
    int i = 0;
    char maxChar = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse the string and count frequency of each character
    while (str[i] != '\0') {
        if (str[i] != '\n') { // Ignore newline characters
            freq[(int)str[i]]++; // Increment frequency of the character
            if (freq[(int)str[i]] > maxFreq) {
                maxFreq = freq[(int)str[i]];
                maxChar = str[i]; // Store the character with maximum frequency
            }
        }
        i++;
    }

    // Print the result
    printf("Maximum number of occurrences of any character: %d\n", maxFreq);
    if (maxChar != '\0') {
        printf("Character with maximum occurrences: '%c'\n", maxChar);
    }

}

