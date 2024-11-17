//area of the square

#include <stdio.h>  

int main() {
    double side, area; 

    
    printf("Enter the length of the side of the square: ");
    scanf("%lf", &side);  

    // Calculate the area of the square
    area = side * side;  // Area of a square is side length squared

    printf("The area of the square is: %.2lf\n", area);

}

