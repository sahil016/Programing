//circumference of rectangle

#include <stdio.h>

int main() {
    float side_length, circumference;

    printf("Enter the side length of the square: ");
    scanf("%f", &side_length);
    
	 // Calculate the circumference of the square using the formula: circumference = 4 * side_length
    circumference = 4 * side_length;

    printf("The circumference of the square with side length %.2f is %.2f\n", side_length, circumference);
}

