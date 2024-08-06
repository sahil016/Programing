#include <stdio.h>

int factorial(int num) {
    int result = 1;
    while (num > 0) {
        result *= num;
        num--;
    }
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
            i--; 
        }
    }

    printf("\nFactorials:\n");
    for (i = 0; i < 5; i++) {
        int fact = factorial(numbers[i]);
        printf("Factorial of %d = %d\n", numbers[i], fact);
    }

    return 0;
}

