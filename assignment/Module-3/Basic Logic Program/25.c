// Accept 5 expense from user and find average of expense



#include <stdio.h>
#define NUM_EXPENSES 5

int main() {
    double expenses[NUM_EXPENSES];
    double totalExpenses = 0.0;
    double averageExpenses;
    int i;

    for (i = 0; i < NUM_EXPENSES; i++) {
        printf("Enter expense %d: ", i + 1);
        scanf("%lf", &expenses[i]);
        totalExpenses += expenses[i]; 
    }

    averageExpenses = totalExpenses / NUM_EXPENSES;

    printf("\nTotal Expenses: %.2lf\n", totalExpenses);
    printf("Average Expense: %.2lf\n", averageExpenses);

    return 0;
}

