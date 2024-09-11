#include <stdio.h>

int main() {
    int n, i;
    int sequence[100];

    printf("Enter the number of terms to generate (up to 100): ");
    scanf("%d", &n);

    // Validate the number of terms
    if (n < 1 || n > 100) {
        printf("The number of terms must be between 1 and 100.\n");
        return 1;
    }

    // Initialize the first few terms of the sequence
    sequence[0] = 1;
    if (n > 1) sequence[1] = 2;
    if (n > 2) sequence[2] = 3;

    // Generate the rest of the sequence
    for (i = 3; i < n; i++) {
        if (i % 4 == 3) {
            sequence[i] = 2 * sequence[i - 1];  // If index % 4 == 3, multiply previous term by 2
        } else {
            sequence[i] = 3 * sequence[i - 1];  // Otherwise, multiply previous term by 3
        }
    }

    // Print the sequence
    for (i = 0; i < n; i++) {
        printf("%d ", sequence[i]);
    }
    printf("\n");

   
}

