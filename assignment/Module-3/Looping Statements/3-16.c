//Calculate the Sum of Natural Numbers Using the While Loop


#include <stdio.h>

int main() {
    int n;       
    int sum = 0; 
    int i = 1;   

    printf("Enter a Number: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
    } else {
        while (i <= n) {
            sum += i;
            i++;
        }
        printf("Sum of natural numbers up to %d = %d\n", n, sum);
    }
}

