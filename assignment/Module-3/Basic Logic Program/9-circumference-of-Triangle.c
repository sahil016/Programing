//circumference of triangle

#include <stdio.h>

int main() {
    float side_a, side_b, side_c, perimeter;

    printf("Enter the length of side a: ");
    scanf("%f", &side_a);

    printf("Enter the length of side b: ");
    scanf("%f", &side_b);

    printf("Enter the length of side c: ");
    scanf("%f", &side_c);
	
	 // Calculate the perimeter of the triangle using the formula: perimeter = side_a + side_b + side_c
    perimeter = side_a + side_b + side_c;

    printf("The perimeter of the triangle with sides %.2f, %.2f, and %.2f is %.2f\n", side_a, side_b, side_c, perimeter);
}

