#include<stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;  // Step 1
    b = a - b;  // Step 2
    a = a - b;  // Step 3

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

