
#include <stdio.h>

int main() {
    double radius, area, circumference;
    double pi = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("The area of the circle is: %.2lf\n", area);
    printf("The circumference of the circle is: %.2lf\n", circumference);

    return 0;
}

