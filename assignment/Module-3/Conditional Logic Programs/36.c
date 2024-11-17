//input electricity unit charges and calculate total
//electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill




#include <stdio.h>

int main()
{
    float units, total_bill, surcharge;

    printf("Enter the number of units consumed: ");
    scanf("%f", &units);  

    // Calculate the total bill based on the number of units consumed
    if (units <= 50) {
        total_bill = units * 0.50;  // Rate for the first 50 units
    } 
    else if (units <= 100) {
        // For units between 51 and 100
        total_bill = (50 * 0.50) + ((units - 50) * 0.75);
    } 
    else if (units <= 250) {
        // For units between 101 and 250
        total_bill = (50 * 0.50) + (50 * 0.75) + ((units - 100) * 1.20);
    } 
    else {
        // For units above 250
        total_bill = (50 * 0.50) + (50 * 0.75) + (150 * 1.20) + ((units - 250) * 1.50);
    }

    // Calculate the surcharge (20% of the total bill)
    surcharge = total_bill * 0.20;
    total_bill += surcharge;  // Add surcharge to the total bill

    // Display the  bill
    printf("Total electricity bill: Rs. %.2f\n", total_bill);

}

