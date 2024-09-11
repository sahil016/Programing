//Convert temperature Fahrenheit to Celsius


#include <stdio.h>

int main() {
    double fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9.0;	// Convert Fahrenheit to Celsius using the formula: C = (F - 32) * 5.0 / 9.0

    printf("Temperature in Celsius: %.2lf\n", celsius);

    return 0;
}

