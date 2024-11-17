#include <stdio.h>

int main() {
    double salary, insurance, loan, remainingSalary;

    printf("Enter your monthly salary: ");
    scanf("%lf", &salary);

    insurance = salary * 0.10;	// Calculate the insurance deduction (10% of salary)

    loan = salary * 0.10;	// Calculate the loan deduction (10% of salary)

    remainingSalary = salary - (insurance + loan);	 // Calculate the remaining salary after deductions

    printf("Your remaining salary after deductions is: %.2lf\n", remainingSalary);

}

