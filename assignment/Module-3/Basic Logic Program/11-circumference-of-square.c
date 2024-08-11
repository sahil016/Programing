#include<stdio.h>
int main()
{
	double side,circumference;
	printf("Enter length of side: ");
	scanf("%lf", &side);
	
	circumference = 4 * side;
	printf("The circumference of the square is: %.2lf",circumference);
}
