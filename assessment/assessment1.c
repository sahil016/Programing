#include <stdio.h>

// Function to display the menu
void menu() {
    printf("----------------------Menu-------------------------------\n");
    printf("1. Pizza Price = 180.00\n");
    printf("2. Burger Price = 100.00\n");
    printf("3. Dosa Price = 120.00\n");
    printf("4. Idli Price = 150.00\n");
}

// Function to calculate the amount for a given choice and quantity
float calculateAmount(int choice, int quantity) {
    // Prices are hardcoded
    float prices[] = {180, 100, 120, 150};
    return prices[choice - 1] * quantity;
}

// Function to display the final bill
void displayBill(float total) {
    printf("Your total amount is: %.2f\n", total);
    printf("Thanks for ordering!! See you next time.\n");
}

int main() {
    int choice, quantity;
    float total = 0;
    char moreOrders;

    // Display the menu 
    menu();

    // Continue taking orders until the user decides to stop
    while (1) {
        // Prompt for and read the user's choice
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        // Check if the choice is valid
        if (choice >= 1 && choice <= 4) {
            printf("You have selected ");
            switch (choice) {
                case 1: printf("Pizza\n"); break;
                case 2: printf("Burger\n"); break;
                case 3: printf("Dosa\n"); break;
                case 4: printf("Idli\n"); break;
            }
            printf("Enter quantity: ");
            scanf("%d", &quantity);

            // Calculate the amount and update the total
            float amount = calculateAmount(choice, quantity);
            total += amount;
            printf("Amount: %.2f\n", amount);
            printf("Total amount is: %.2f\n", total);

            printf("Do you want to place more orders? (y/n): ");
            scanf(" %c", &moreOrders);
            if (moreOrders != 'y' && moreOrders != 'Y') {
                break;  // Exit the loop if the user does not want to order more
            }
        } else {
            printf("Invalid choice. Please enter a valid number between 1 and 4.\n");
        }
    }

    // Display the final bill
    displayBill(total);

}

