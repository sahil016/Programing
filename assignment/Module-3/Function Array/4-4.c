//WAP to find factorial using recursion


#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    int i;
    for(i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = factorial(num);
    
    printf("Factorial of %d is %d\n", num, result);
}

