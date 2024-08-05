//.Calculate compound interest


#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compoundInterest, amount;
    int n;

    printf("Enter the initial amount of money (Principal): ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    printf("Enter the number of years: ");
    scanf("%lf", &time);
    amount = principal * pow((1 + rate / (n * 100)), n * time);

    compoundInterest = amount - principal;

    printf("The compound interest is: %.2f Rupees\n", compoundInterest);
    printf("The total amount after interest is: $%.2f\n", amount);

}

