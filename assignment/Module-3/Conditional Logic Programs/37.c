// WAP to see
// i)	Monday to Sunday using switch case
//ii)	Vowel or Consonant using switch case
//all in one program


#include <stdio.h>

int main() {
    int choice;  
    printf("Select an option:\n");
    printf("1. Find day of the week\n");
    printf("2. Check if a character is a vowel or consonant\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);  

    // Use switch case to handle the user's choice
    switch (choice) {
        case 1: {  // If the user selects option 1
            int day;  // Variable to store the day number

            // Prompt the user to enter a number for the day of the week
            printf("Enter a number (1-7) for the day of the week: ");
            scanf("%d", &day);  // Read the day number

            // Use switch case to determine the day of the week
            switch (day) {
                case 1:
                    printf("Monday\n");
                    break;
                case 2:
                    printf("Tuesday\n");
                    break;
                case 3:
                    printf("Wednesday\n");
                    break;
                case 4:
                    printf("Thursday\n");
                    break;
                case 5:
                    printf("Friday\n");
                    break;
                case 6:
                    printf("Saturday\n");
                    break;
                case 7:
                    printf("Sunday\n");
                    break;
                default:
                    // Handle invalid day numbers
                    printf("Invalid input! Please enter a number between 1 and 7.\n");
            }
            break;  // End of case 1
        }
        case 2: {  // If the user selects option 2
            char ch;  // Variable to store the character

            // Prompt the user to enter a character
            printf("Enter a character: ");
            scanf(" %c", &ch);  // Read the character (note the space before %c to handle whitespace)

            // Use switch case to determine if the character is a vowel or consonant
            switch (ch) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    // Character is a vowel
                    printf("%c is a vowel.\n", ch);
                    break;
                default:
                    // Character is a consonant
                    printf("%c is a consonant.\n", ch);
            }
            break;  // End of case 2
        }
        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
    }

}

