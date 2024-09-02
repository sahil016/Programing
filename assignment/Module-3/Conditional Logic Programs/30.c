//If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe minimum bill should be of Rs. 256/-


#include <stdio.h>
#include <string.h>  // Include for strlen function

int main() {
    int customerID;
    char name[100];
    float unitsConsumed, billAmount, finalBillAmount;

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

    printf("Enter Units Consumed: ");
    scanf("%f", &unitsConsumed);

    // Calculate the initial bill amount based on the units consumed
    if (unitsConsumed <= 350) {
        billAmount = unitsConsumed * 1.20; // Rate for up to 350 units
    } else if (unitsConsumed > 350 && unitsConsumed < 600) {
        billAmount = unitsConsumed * 1.50; // Rate for units between 351 and 599
    } else if (unitsConsumed >= 600 && unitsConsumed < 800) {
        billAmount = unitsConsumed * 1.80; // Rate for units between 600 and 799
    } else {
        billAmount = unitsConsumed * 2.00; // Rate for 800 units and above
    }

    // Apply surcharge if the bill amount exceeds Rs. 800
    if (billAmount > 800) {
        finalBillAmount = billAmount * 1.18; // Add 18% surcharge
    } else {
        finalBillAmount = billAmount; // No surcharge if bill is 800 or less
    }

    // Ensure the final bill amount is at least Rs. 256
    if (finalBillAmount < 256) {
        finalBillAmount = 256; // Set minimum bill amount
    }

    printf("\nElectricity Bill\n");
    printf("----------------\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %.2f\n", unitsConsumed);
    printf("Total Bill Amount: Rs. %.2f\n", finalBillAmount);

}

