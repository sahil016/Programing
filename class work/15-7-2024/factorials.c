#include <stdio.h>

main()
{
    int i, n, fact = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        fact *= i;  
    }
    
    printf("Factorial is: %d\n", fact);
    
}

