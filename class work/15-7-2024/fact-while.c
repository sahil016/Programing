#include <stdio.h>

int main()  
{
    int i = 1, n, fact = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    
    while (i <= n) {
        fact *= i;  
        i++;  
    }
    
    printf("Factorial is: %d\n", fact);
    
}

