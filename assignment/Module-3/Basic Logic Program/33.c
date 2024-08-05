//Read Integer and Print First Three Powers


#include <stdio.h>
#include <math.h> 

int main() {
    int num;
    int power1, power2, power3;

    printf("Enter an integer: ");
    scanf("%d", &num);

    power1 = pow(num, 1);  // num^1
    power2 = pow(num, 2);  // num^2
    power3 = pow(num, 3);  // num^3

    printf("%d^1 = %d\n", num, power1);
    printf("%d^2 = %d\n", num, power2);
    printf("%d^3 = %d\n", num, power3);

    return 0;
}

