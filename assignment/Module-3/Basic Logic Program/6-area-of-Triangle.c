//find area of triangle

#include <stdio.h>

int main() {
    double base, height, area;

    printf("Enter the base of the triangle: ");
    scanf("%lf", &base);

    printf("Enter the height of the triangle: ");
    scanf("%lf", &height);

	// Calculate the area of the triangle using the formula: area = 0.5 * base * height
    area = 0.5 * base * height;

    printf("The area of the triangle is: %.2lf\n", area);

}

