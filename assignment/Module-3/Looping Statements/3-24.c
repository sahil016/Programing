#include <stdio.h>

int main() {
    int n,i, sum = 0;

    printf("Enter the Number ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++) {
        sum += i * i;
    }

    printf("The sum of the squares of the first %d natural numbers is: %d\n", n, sum);

}

