//WAP to calculate swap 2 numbers with using of multiplication and division

#include <stdio.h>

void swapUsingMultiplicationDivision(int *a, int *b) {
    if (*a != 0 && *b != 0) { 
        *a = (*a) * (*b); // a = a * b
        *b = (*a) / (*b); // b = (a * b) / b = a
        *a = (*a) / (*b); // a = (a * b) / a = b
    }
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    swapUsingMultiplicationDivision(&num1, &num2);

    printf("Swapped values: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

