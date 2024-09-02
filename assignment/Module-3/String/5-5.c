//Write a program in C to compare two strings without using string library functions.

#include <stdio.h>

int stringCompare(char str1[], char str2[]) {
    int i = 0;

    // Loop through both strings until the end of either string
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i]; // Return the difference if characters don't match
        }
        i++; // Move to the next character
    }

    // Final comparison after the loop ends
    return str1[i] - str2[i];
}

int main() {
    char str1[100], str2[100]; // Arrays to store the strings

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin); // Read the first string
    
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin); // Read the second string

    // Remove newline character at the end of the strings, if present
    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0') {
        if (str1[len1] == '\n') {
            str1[len1] = '\0';
            break;
        }
        len1++;
    }
    while (str2[len2] != '\0') {
        if (str2[len2] == '\n') {
            str2[len2] = '\0';
            break;
        }
        len2++;
    }

    // Compare the two strings
    int result = stringCompare(str1, str2);

    // Output the result of the comparison
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }

}

