//Convert kilometers into meters


#include <stdio.h>

int main() {
    float kilometers;  
    float meters;      

    printf("Enter the number of kilometers: ");
    scanf("%f", &kilometers);

    meters = kilometers * 1000;

    printf("%.2f kilometers is equivalent to %.2f meters.\n", kilometers, meters);

    return 0;
}

