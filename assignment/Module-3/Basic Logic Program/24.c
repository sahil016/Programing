// .Accept 5 employees name and salary and count average and total salary


#include <stdio.h>

#define NUM_EMPLOYEES 5

int main() {
    char names[NUM_EMPLOYEES][50];
    double salaries[NUM_EMPLOYEES];
    double totalSalary = 0.0;
    double averageSalary;
    int i; 

    for (i = 0; i < NUM_EMPLOYEES; i++) {
        printf("Enter the name of employee %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter the salary of %s: ", names[i]);
        scanf("%lf", &salaries[i]);
        totalSalary += salaries[i];
    }

    averageSalary = totalSalary / NUM_EMPLOYEES;

    printf("\nTotal Salary: %.2lf\n", totalSalary);
    printf("Average Salary: %.2lf\n", averageSalary);

    return 0;
}

