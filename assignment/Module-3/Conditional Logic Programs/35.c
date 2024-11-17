//Accept the input month number and print number of days in that month.


#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Leap year
    } else {
        return 0; // Not a leap year
    }
}

int main() {
    int monthNumber, year;
    int days;

    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

    printf("Enter the year: ");
    scanf("%d", &year);

    switch (monthNumber) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            days = 31;
            break;
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            days = 30;
            break;
        case 2:  // February
            if (isLeapYear(year)) {
                days = 29; // Leap year
            } else {
                days = 28; // Non-leap year
            }
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }

    printf("Number of days in month %d of year %d is: %d\n", monthNumber, year, days);

}

