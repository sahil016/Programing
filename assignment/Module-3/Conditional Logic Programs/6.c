// check if character is vowel or not


#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

	// Check if the entered character is a vowel (both uppercase and lowercase)
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
	{
        printf("%c is a vowel.\n", ch);
    } 
	else // If the character is not a vowel, print this message
	{
        printf("%c is not a vowel.\n", ch);
    }

}

