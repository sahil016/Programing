//.Calculate compound interest


#include <stdio.h>
#include <math.h>	// Include the math library for the pow function

int main() {
    double principal, rate, time, compoundInterest, amount;
    int n;

    printf("Enter the initial amount of money (Principal): ");	// Prompt the user to enter the initial amount of money (Principal)
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percentage): ");	 // Prompt the user to enter the annual interest rate (in percentage)
    scanf("%lf", &rate);

    printf("Enter the number of times interest is compounded per year: ");	 // Prompt the user to enter the number of times interest is compounded per year
    scanf("%d", &n);

    printf("Enter the number of years: ");	 // Prompt the user to enter the number of years
    scanf("%lf", &time);
    amount = principal * pow((1 + rate / (n * 100)), n * time);	 // Calculate the total amount using the compound interest formula

    compoundInterest = amount - principal; // Calculate the compound interest

    printf("The compound interest is: %.2f Rupees\n", compoundInterest);
    printf("The total amount after interest is: $%.2f\n", amount);

}

