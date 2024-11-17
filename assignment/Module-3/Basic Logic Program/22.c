//Calculate compound interest



#include <stdio.h>
#include <math.h>   // Include the math library for the pow function

int main() {
    double P, R, t, Amount, CompoundInterest;

    // Accept input from the user
    printf("Enter the principal amount : ");
    scanf("%lf", &P);
    printf("Enter the annual interest rate in percentage: ");
    scanf("%lf", &R);
    printf("Enter the time in years: ");
    scanf("%lf", &t);

    Amount = P * pow((1 + R / 100), t);	// Calculate the compound amount using the formula: Amount = P * (1 + R / 100) ^ t

    CompoundInterest = Amount - P;	// Calculate the compound interest earned

    printf("The total amount after %.2lf years is: %.2lf\n", t, Amount);
    printf("The compound interest earned is: %.2lf\n", CompoundInterest);

}

