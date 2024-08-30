//WAP to input the week number and print week day


#include <stdio.h>

int main() {
    int weekNumber;

    printf("Enter the week number (1-7): ");
    scanf("%d", &weekNumber);

	// Use switch case to determine the day of the week based on the week number
    switch (weekNumber) {
        case 1:
            printf("Weekday: Monday\n");
            break;
        case 2:
            printf("Weekday: Tuesday\n");
            break;
        case 3:
            printf("Weekday: Wednesday\n");
            break;
        case 4:
            printf("Weekday: Thursday\n");
            break;
        case 5:
            printf("Weekday: Friday\n");
            break;
        case 6:
            printf("Weekday: Saturday\n");
            break;
        case 7:
            printf("Weekday: Sunday\n");
            break;
        default:
            printf("Invalid week number. Please enter a number between 1 and 7.\n");
            break;
    }

}

