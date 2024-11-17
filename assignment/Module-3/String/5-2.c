//Write a program in C to separate individual characters from a string.


#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Individual characters:\n");
    while (str[i] != '\0')  // Loop through each character in the string until the null terminator is found
	{
        if (str[i] != '\n') // Skip printing if the character is a newline (left by fgets)
		{
            printf("%c\n", str[i]);	 // Print the current character followed by a newline
        }
        i++;	 // Move to the next character in the string
    }
}

