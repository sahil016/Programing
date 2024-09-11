#include <stdio.h>

// Function to display the menu
void menu(const char *foods[], float prices[], int size) {
    int i;
    printf("----------------------Menu-------------------------------\n");
    for (i = 0; i < size; i++) {
        printf("%d. %s Price = %.2f\n", i + 1, foods[i], prices[i]);
    }
}

// Function to calculate the amount for a given choice and quantity
float calculateAmount(int choice, int quantity, float prices[]) {
    return prices[choice - 1] * quantity;
}

// Function to display the final bill
void displayBill(float total) 
{
    printf("Your total amount is: %.2f\n", total);
    printf("Thanks for ordering!! See you next time.\n");
}

int main() 
{
    const char *foods[] = {"Pizza", "Burger", "Dosa", "Idli"};
    float prices[] = {180, 100, 120, 150};
    int choice, quantity;
    float total = 0;
    char moreOrders;
    int size = sizeof(prices) / sizeof(prices[0]); // Calculate the size of array

    // Display the menu once
    menu(foods, prices, size);

    // Continue taking orders until the user decides to stop
    while (1) {
        // Prompt for and read the user's choice
        printf("Enter your choice (1-%d): ", size);
        scanf("%d", &choice);

        // Check if the choice is valid
        if (choice >= 1 && choice <= size) {
            printf("You have selected %s\n", foods[choice - 1]);
            printf("Enter quantity: ");
            scanf("%d", &quantity);

            // Calculate the amount and update the total
            float amount = calculateAmount(choice, quantity, prices);
            total += amount;
            printf("Amount: %.2f\n", amount);
            printf("Total amount is: %.2f\n", total);

            // Ask if the user wants to place more orders
            printf("Do you want to place more orders? (y/n): ");
            scanf(" %c", &moreOrders);
            if (moreOrders != 'y' && moreOrders != 'Y') {
                break;  // Exit the loop if the user does not want to order more
            }
        } 
		else 
		{
            printf("Invalid choice. Please enter a valid number between 1 and %d.\n", size);
        }
    }

    // Display the final bill
    displayBill(total);

}

