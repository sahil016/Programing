//Write a program in C to find the length of a string without using library functions.


#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

	// Loop through each character in the string until the null terminator is found
    while (str[length] != '\0') {
        length++;
    }
    
	 // Adjust the length if the last character is a newline (left by fgets)
    if (length > 0 && str[length - 1] == '\n') {
        length--;
    }

    printf("Length of the string: %d\n", length);

}

