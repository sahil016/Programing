//Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable

#include <stdio.h>

void swapWithoutThirdVar(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int num1, num2;

    // Accept numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Swap without using a third variable
    swapWithoutThirdVar(&num1, &num2);

    // Output the swapped numbers
    printf("Swapped values without third variable: Number one = %d, number 2 = %d\n", num1, num2);

    return 0;
}

