#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Include time.h for seeding srand()

int main() {
    printf("******************** Welcome to the game ************************\n");
    printf("********** Enter a number between 1 to 50 ***********\n");

    srand(time(NULL)); // Seed the random number generator with current time

    while (1) {
        int choice, n = rand() % 50 + 1; // Generate a random number between 1 and 50
        printf("\nEnter your guess: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 50) {
            printf("Invalid Choice!! Please enter a number between 1 and 50.\n");
            continue; // Restart the loop to get a valid input
        } else if (choice == n) {
            printf("You win!! The number was %d.\n", n);
            break; // Exit the loop on correct guess
        } else if (choice < n) {
            printf("%d is smaller than the original number.\n", choice);
        } else {
            printf("%d is greater than the original number.\n", choice);
        }
    }

    return 0;
}

