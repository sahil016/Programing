#include <stdio.h>

int main() {
    char schoolName[100];
    int i = 0;


    printf("Enter the school's name: ");
    scanf("%[^\n]s", schoolName); // Read the entire line of text until Enter is pressed

    printf("Abbreviated form: ");

    if (schoolName[0] != '\0')  // Check if the schoolName array is not empty
	{
        printf("%c", schoolName[0]);
    }

	
    while (schoolName[i] != '\0') // Loop through each character in the schoolName array
	{
       	
        if (schoolName[i] == ' ' && schoolName[i + 1] != '\0') // If a space is found and the next character is not the null terminator	
        {
            printf("%c", schoolName[i + 1]);
        }
        i++;
    }

    printf("\n"); // new line

}

