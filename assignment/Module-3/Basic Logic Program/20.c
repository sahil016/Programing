#include <stdio.h>

int main() {
    double salary, insurance, loan, remainingSalary;

    printf("Enter your monthly salary: ");
    scanf("%lf", &salary);

    insurance = salary * 0.10;

    loan = salary * 0.10;

    remainingSalary = salary - (insurance + loan);

    printf("Your remaining salary after deductions is: %.2lf\n", remainingSalary);

}

