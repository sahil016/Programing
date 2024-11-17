//WAP to find factorial using recursion

#include <stdio.h>

int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n * factorial of (n - 1)
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is non-negative
    if (num < 0) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        int result = factorial(num); // Calculate factorial using recursion
        printf("Factorial of %d is %d\n", num, result);
    }

}

