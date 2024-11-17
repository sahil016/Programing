// WAP to find minimum number among 3 numbers

#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int min;
    
    // Assume 'a' is the minimum initially
    min = a;
    
    // Check if 'b' is less than the current minimum ('a')
    if (b < min) {
        min = b;  // Update 'min' to 'b' if 'b' is smaller
    }
    
    // Check if 'c' is less than the current minimum ('a' or 'b')
    if (c < min) {
        min = c;  // Update 'min' to 'c' if 'c' is smaller
    }
    
    printf("The minimum number is: %d\n", min);
    
    return 0;
}

