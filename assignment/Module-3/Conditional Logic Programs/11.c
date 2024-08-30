//WAP to find number is even or odd using ternary operator


#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

	  // The if-else structure checks if the number is even or odd
    if (number % 2 == 0) { 
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

}

