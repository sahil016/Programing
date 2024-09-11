#include <stdio.h>

int factorial(int num) {
    int result = 1;
    while (num > 0) {
        result *= num;  // Multiply result by the current number
        num--; // Decrement the number
    return result;
}

int main() {
    int numbers[5];  
    int i;

    printf("Enter 5 non-negative integers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] < 0) {
            printf("Factorial is not defined for negative numbers. Please enter a non-negative integer.\n");
            i--; // Decrement i to allow re-entry of the current number
        }
    }

    printf("\nFactorials:\n");
    for (i = 0; i < 5; i++) {
        int fact = factorial(numbers[i]); // Calculate factorial of the current number
        printf("Factorial of %d = %d\n", numbers[i], fact);
    }

}

