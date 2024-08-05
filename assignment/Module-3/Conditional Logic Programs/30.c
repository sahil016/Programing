//If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe minimum bill should be of Rs. 256/-


#include <stdio.h>

int main() {
    int customerID;
    char name[100];
    float unitsConsumed, billAmount, finalBillAmount;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    
    printf("Enter Customer Name: ");
    getchar(); 
    fgets(name, sizeof(name), stdin);
    
    size_t length = strlen(name);
    if (length > 0 && name[length - 1] == '\n') {
        name[length - 1] = '\0';
    }

    printf("Enter Units Consumed: ");
    scanf("%f", &unitsConsumed);

    if (unitsConsumed <= 350) {
        billAmount = unitsConsumed * 1.20;
    } else if (unitsConsumed > 350 && unitsConsumed < 600) {
        billAmount = unitsConsumed * 1.50;
    } else if (unitsConsumed >= 600 && unitsConsumed < 800) {
        billAmount = unitsConsumed * 1.80;
    } else {
        billAmount = unitsConsumed * 2.00;
    }

    if (billAmount > 800) {
        finalBillAmount = billAmount * 1.18; 
    } else {
        finalBillAmount = billAmount;
    }

    if (finalBillAmount < 256) {
        finalBillAmount = 256;
    }

    printf("\nElectricity Bill\n");
    printf("----------------\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %.2f\n", unitsConsumed);
    printf("Total Bill Amount: Rs. %.2f\n", finalBillAmount);

    return 0;
}

