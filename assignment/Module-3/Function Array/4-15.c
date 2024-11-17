//Store 5 numbers in array and sort it in ascending order

#include <stdio.h>

int main() {
    int numbers[5];  
    int temp;        
    int i, j;        

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]); 
    }

    // Sort the array in ascending order using bubble sort
    for (i = 0; i < 4; i++) {          // Loop through each element except the last one
        for (j = i + 1; j < 5; j++) {  // Compare with each subsequent element
            if (numbers[i] > numbers[j]) { // If the current element is greater than the next
                // Swap the elements
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    printf("\nSorted numbers in ascending order:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]); // Print each number in the sorted array
    }

}

