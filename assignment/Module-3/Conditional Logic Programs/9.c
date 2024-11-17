//Check Uppercase or Lowercase or Digit or Special Character


#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')  // Check if the character is an uppercase letter
	{
        printf("%c is an uppercase letter.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') 
	{
        printf("%c is a lowercase letter.\n", ch);
    } else if (ch >= '0' && ch <= '9') {	// Check if the character is a lowercase letter
        printf("%c is a digit.\n", ch);
    } 
	else 
	{
        printf("%c is a special character.\n", ch);
    }

}

