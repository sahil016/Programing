//19 to 29 numbers of programs are in this one combined program


#include <stdio.h>
#include <string.h>  

int main() {
    int customerID;
    char name[100];
    float unitsConsumed, billAmount;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    
    printf("Enter Customer Name: ");
    getchar(); 
    fgets(name, sizeof(name), stdin); 
    
    // Remove the newline character at the end of the string if it exists
    size_t length = strlen(name);
    if (length > 0 && name[length - 1] == '\n') {
        name[length - 1] = '\0'; // Replace newline with null terminator
    }

    // Prompt the user to enter the units of electricity consumed
    printf("Enter Units Consumed: ");
    scanf("%f", &unitsConsumed);

    // Calculate the bill amount based on the units consumed
    if (unitsConsumed <= 350) {
        billAmount = unitsConsumed * 1.20; // Rate for up to 350 units
    } else if (unitsConsumed > 350 && unitsConsumed < 600) {
        billAmount = unitsConsumed * 1.50; // Rate for units between 351 and 599
    } else if (unitsConsumed >= 600 && unitsConsumed < 800) {
        billAmount = unitsConsumed * 1.80; // Rate for units between 600 and 799
    } else {
        billAmount = unitsConsumed * 2.00; // Rate for 800 units and above
    }

    // Print the formatted bill details
    printf("\nElectricity Bill\n");
    printf("----------------\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %.2f\n", unitsConsumed);
    printf("Total Bill Amount: @%.2f\n", billAmount);

}

