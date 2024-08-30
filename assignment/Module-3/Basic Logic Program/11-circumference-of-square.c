//Find circumference of square formula : C = 4 * a

#include<stdio.h>
int main()
{
	double side,circumference;
	printf("Enter length of side: ");
	scanf("%lf", &side);
	
	 // Calculate the circumference of the square using the formula: circumference = 4 * side
	circumference = 4 * side;
	printf("The circumference of the square is: %.2lf",circumference);
}
