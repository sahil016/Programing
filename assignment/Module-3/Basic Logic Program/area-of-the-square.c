#include <stdio.h>

int main() {
    double side, area;

    printf("Enter the length of the side of the square: ");
    scanf("%lf", &side);

    area = side * side;

    printf("The area of the square is: %.2lf\n", area);
}

