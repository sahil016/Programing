//Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable

#include <stdio.h>

void swapWithoutThirdVar(int *a, int *b) // *a and *b are pointers to integers. The * operator is used to access the value at the address stored in these pointers.
{
    *a = *a + *b;	 // Add the value pointed to by b to the value pointed to by a
    *b = *a - *b;	// Subtract the new value of *b from *a to get the original value of *a
    *a = *a - *b;	 // Subtract the new value of *b from the new value of *a to get the original value of *b
}

int main() {
    int num1, num2;

    // Accept numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Swap without using a third variable
    swapWithoutThirdVar(&num1, &num2);

    // Output the swapped numbers
    printf("Swapped values without third variable: Number one = %d, number 2 = %d\n", num1, num2);

    
}

