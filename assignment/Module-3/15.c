#include <stdio.h>

int main() {
    char schoolName[100];
    int i = 0;

    // Input the school's name
    printf("Enter the school's name: ");
    scanf("%[^\n]s", schoolName); 

    printf("Abbreviated form: ");

    // Print the first character of the first word
    if (schoolName[0] != '\0') {
        printf("%c", schoolName[0]);
    }

    // Traverse through the string to find spaces
    while (schoolName[i] != '\0') {
        // If a space is found, print the next character
        if (schoolName[i] == ' ' && schoolName[i + 1] != '\0') {
            printf("%c", schoolName[i + 1]);
        }
        i++;
    }

    printf("\n");

    return 0;
}

