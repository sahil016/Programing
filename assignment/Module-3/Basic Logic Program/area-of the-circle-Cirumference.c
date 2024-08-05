#include <stdio.h>
#define PI 3.14159

int main() {
    double radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

   
    area = PI * radius * radius;

    circumference = 2 * PI * radius;

    printf("The area of the circle is: %.2lf\n", area);
    printf("The circumference of the circle is: %.2lf\n", circumference);
}

