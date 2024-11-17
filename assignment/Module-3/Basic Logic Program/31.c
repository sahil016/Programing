//Convert kilometers into meters


#include <stdio.h>

int main() {
    float kilometers, meters;      

    printf("Enter the number of kilometers: ");
    scanf("%f", &kilometers);

    meters = kilometers * 1000;	 // Convert kilometers to meters (1 kilometer = 1000 meters)

    printf("%.2f kilometers is equivalent to %.2f meters.\n", kilometers, meters);

}

