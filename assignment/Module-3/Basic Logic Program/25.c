// Accept 5 expense from user and find average of expense


#include <stdio.h>

int main() {
    double expenses[5];
    double totalExpenses = 0.0;
    double averageExpenses;
    int i;
    int num_expenses = 5; // Number of expenses

    for (i = 0; i < num_expenses; i++) {
        printf("Enter expense %d: ", i + 1);
        scanf("%lf", &expenses[i]);
        totalExpenses += expenses[i];
    }

    averageExpenses = totalExpenses / num_expenses;

    printf("\nTotal Expenses: %.2lf\n", totalExpenses);
    printf("Average Expense: %.2lf\n", averageExpenses);

}

