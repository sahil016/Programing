// Calculate person�s Annual salary

#include <stdio.h>

int main() {
    float monthlySalary, annualSalary;


    printf("Enter the person's monthly salary: ");
    scanf("%f", &monthlySalary);

    annualSalary = monthlySalary * 12;	// Calculate the annual salary by multiplying the monthly salary by 12

    
   printf("The annual salary is: %.2f rupees\n", annualSalary);

}



