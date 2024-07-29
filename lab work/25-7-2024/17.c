//Calculate person’s insurance premium based on salary

#include <stdio.h>

int main() {
    float salary, premium;


    printf("Enter the person's salary: ");
    scanf("%f", &salary);


    if (salary < 30000) {
        premium = 0.05 * salary;
    } else if (salary <= 50000) {
        premium = 0.07 * salary;
    } else {
        premium = 0.10 * salary;
    }


    printf("The insurance premium is: %.2f\n", premium);

}

