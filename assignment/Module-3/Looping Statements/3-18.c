//.Write a C Program to Print the Multiplication Table of N

#include <stdio.h>

int main() {
    int n;  
    int i;  

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Multiplication table of %d:\n", n);
    for (i = 1; i <= 10; i++) // Loop to generate and print the multiplication table from 1 to 10
	{
        printf("%d * %d = %d\n", n, i, n * i);
    }
}

