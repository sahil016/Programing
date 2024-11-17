//  WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice

#include <stdio.h>

void sortArray(int arr[], int n, int ascending) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            // Compare elements based on the sorting order
            if ((ascending && arr[i] > arr[j]) || (!ascending && arr[i] < arr[j])) {
                // Swap elements if out of order
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to print the elements of an array
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n1, n2, choice;
    int i;

    printf("Enter number of elements for the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements for the first array: ", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements for the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements for the second array: ", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Choose sorting order:\n1. Ascending\n2. Descending\n");
    scanf("%d", &choice);

    // Determine sorting order based on user choice
    int ascending = (choice == 1);

    // Sort and print the first array
    printf("First array: ");
    sortArray(arr1, n1, ascending);
    printArray(arr1, n1);

    // Sort and print the second array
    printf("Second array: ");
    sortArray(arr2, n2, ascending);
    printArray(arr2, n2);

}

