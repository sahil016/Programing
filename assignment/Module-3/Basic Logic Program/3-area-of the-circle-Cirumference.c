//area of the circle circumference

#include <stdio.h>
#include <math.h>  // Include the math library for M_PI

int main() {
    double radius, area, circumference;

    // Use M_PI provided by the math library
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate area and circumference using M_PI
    area = M_PI * radius * radius;
    circumference = 2 * M_PI * radius;

    printf("The area of the circle is: %.2lf\n", area);
    printf("The circumference of the circle is: %.2lf\n", circumference);

}

