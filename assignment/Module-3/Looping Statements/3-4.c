//WAP to print table up to given numbers


#include <stdio.h>

int main() {
    int num, i;

    printf("Enter the number for the table: ");
    scanf("%d", &num);

    printf("Multiplication table for %d:\n", num);
    for (i = 1; i <= 10; i++) // Loop to generate and print the multiplication table	
	{
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

