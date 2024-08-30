//area of the cude

#include <stdio.h>  

int main() {
    double side, area; 

    printf("Enter the length of the side of the cube: ");
    scanf("%lf", &side);

    // Calculate the surface area of the cube
    area = 6 * side * side;  // Surface area formula: 6 * side^2

    printf("The surface area of the cube is: %.2lf\n", area);

}

