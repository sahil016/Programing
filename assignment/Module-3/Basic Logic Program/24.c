// .Accept 5 employees name and salary and count average and total salary


#include <stdio.h>

int main() {
    char names[5][50];
    double salaries[5];
    double totalSalary = 0.0;
    double averageSalary;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter the name of employee %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter the salary of %s: ", names[i]);
        scanf("%lf", &salaries[i]);
        totalSalary += salaries[i];
    }

    averageSalary = totalSalary / 5;

    printf("\nTotal Salary: %.2lf\n", totalSalary);
    printf("Average Salary: %.2lf\n", averageSalary);

}


