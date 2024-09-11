//Calculate person’s insurance premium based on salary

#include <stdio.h>

int main() {
    float salary, premium;


    printf("Enter the person's salary: ");
    scanf("%f", &salary);


    if (salary < 30000)  // Determine the insurance premium based on salary
	{
        premium = 0.05 * salary; // For salaries less than 30,000, the premium is 5% of the salary
    } 
	else if (salary <= 50000) 
	{
        premium = 0.07 * salary;  // For salaries between 30,000 and 50,000 (inclusive), the premium is 7% of the salary
    } else {
        premium = 0.10 * salary;	 // For salaries greater than 50,000, the premium is 10% of the salary
    }


    printf("The insurance premium is: %.2f\n", premium);

}

