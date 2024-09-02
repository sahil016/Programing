//Accept 5 numbers from user and perform sum of array

#include <stdio.h>

int main() {
    int numbers[5];  
    int sum = 0;     
    int i;           

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]); 
    }

    // Calculate the sum of the array elements
    for (i = 0; i < 5; i++) {
        sum += numbers[i]; // Add each element to the sum
    }

    printf("Sum of the array elements: %d\n", sum); 

}

