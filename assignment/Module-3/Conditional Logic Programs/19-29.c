


#include <stdio.h>

int main() {
    int customerID;
    char name[100];
    float unitsConsumed, billAmount;

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

    printf("\nElectricity Bill\n");
    printf("----------------\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %.2f\n", unitsConsumed);
    printf("Total Bill Amount: @%.2f\n", billAmount);


}

