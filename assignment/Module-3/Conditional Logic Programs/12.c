//WAP to find maximum number among 3 numbers using ternary operator


#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int max;
    
    // Check if 'a' is greater than or equal to both 'b' and 'c'
    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }
    
    printf("The maximum number is: %d\n", max);
    
}

