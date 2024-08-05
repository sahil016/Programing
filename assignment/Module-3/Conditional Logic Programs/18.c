///18.Write a C program to calculate profit and loss on a transaction.



#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLoss;

    printf("Enter the cost price of the item: ");
    scanf("%f", &costPrice);
    
    printf("Enter the selling price of the item: ");
    scanf("%f", &sellingPrice);

    profitOrLoss = sellingPrice - costPrice;

    if (profitOrLoss > 0) {
        printf("Profit: %.2f\n", profitOrLoss);
    } else if (profitOrLoss < 0) {
        printf("Loss: %.2f\n", -profitOrLoss);
    } else {
        printf("No Profit No Loss\n");
    }

}

