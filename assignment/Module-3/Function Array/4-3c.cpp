//. WAP to find reverse of string using recursion



#include <stdio.h>

int main() 
{
    int choice;
    float num1, num2, result;

    while (1) { // Keep showing the menu until the user chooses to exit
        // Display menu options
        printf("\n--- Menu ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            // Exit the loop and end the program
            printf("Exiting the program.\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result of addition: %.2f\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result of subtraction: %.2f\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result of multiplication: %.2f\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result of division: %.2f\n", result);
                } else {
                    // Prevent division by zero
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
                break;
        }
    }
}

