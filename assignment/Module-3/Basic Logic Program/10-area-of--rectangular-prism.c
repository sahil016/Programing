//find area of rectangular

#include <stdio.h>

int main() {
    float width, length, height, surface_area;

    printf("Enter the width of the rectangular prism: ");
    scanf("%f", &width);

    printf("Enter the length of the rectangular prism: ");
    scanf("%f", &length);

    printf("Enter the height of the rectangular prism: ");
    scanf("%f", &height);
	
	 // Calculate the surface area of the rectangular prism using the formula:
    // surface_area = 2 * (width * length + height * length + height * width)
    surface_area = 2 * (width * length + height * length + height * width);

    printf("The surface area of the rectangular prism with dimensions %.2f x %.2f x %.2f is %.2f\n",width, length, height, surface_area);
}

