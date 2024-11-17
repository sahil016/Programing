//Write a program to find out the max number from given array using function



#include <stdio.h>

double findMax(double arr[], int size) {
    double max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    return max;
}

int main() {
    int n;
    double arr[100]; 

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    // Ensure the number of elements does not exceed the array size
    if (n > 100) {
        printf("The number of elements exceeds the maximum allowed (100).\n");
        return 1; // Exit the program with an error code
    }

    // Input elements into the array
    for (int i = 0; i < n; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &arr[i]);
    }

    // Find the maximum number using the function
    double maxNumber = findMax(arr, n);

    printf("Largest element = %.2lf\n", maxNumber);

}
}

