#include<stdio.h>

// Function to display the menu
void menu()
{
    printf("----------------------Menu-------------------------------\n");
    printf("1. Pizza Price = 180.00\n");
    printf("2. Burger Price = 100.00\n");
    printf("3. Dosa Price = 120.00\n");
    printf("4. Idli Price = 150.00\n");
}

// Function to calculate the total amount based on choice and quantity
float calculateAmount(int choice, int quantity)
{
    float prices[] = {180, 100, 120, 150}; // Array to store prices of items
    return prices[choice - 1] * quantity;  // Return the total amount for the chosen item
}

int main()
{
    int choice, quantity; // Variables to store user choice and quantity
    float total = 0;      // Variable to store the running total
    char moreOrders;      // Variable to check if the user wants to place more orders

    menu(); // Display the menu

    while (1) // Infinite loop for multiple orders
    {
        printf("Enter your choice(1-4): ");
        scanf("%d", &choice);

        // Check if the choice is valid
        if (choice >= 1 && choice <= 4)
        {
            printf("You have selected ");

            // Display the selected item
            switch (choice)
            {
                case 1:
                    printf("Pizza\n");
                    break;
                case 2:
                    printf("Burger\n");
                    break;
                case 3:
                    printf("Dosa\n");
                    break;
                case 4:
                    printf("Idli\n");
                    break;
            }

            // Get the quantity of the selected item
            printf("Enter quantity: ");
            scanf("%d", &quantity);

            // Calculate the amount for the selected item and add to the total
            float amount = calculateAmount(choice, quantity);
            total += amount;

            printf("Amount: %.2f\n", amount); // Display the amount for the selected item
            printf("Total amount is: %.2f\n", total); // Display the running total

            // Ask the user if they want to place more orders
            printf("Do you want to place more orders? y/n: ");
            scanf(" %c", &moreOrders);

            // If the user does not want to place more orders, exit the loop
            if (moreOrders != 'y' && moreOrders != 'Y') {
            	printf("your total amount is = %.2f ", total);
            	printf("\nThank you!!");
                break;
            }
    
        }
        else // Handle invalid choice
        {
            printf("Invalid choice. Please enter a valid number between 1 and 4.\n");
        }
    }

    return 0; // Exit the program
}
