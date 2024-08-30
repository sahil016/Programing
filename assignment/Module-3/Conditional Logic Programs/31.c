//Write a program in C to read any Month Number in integer and display the number of days for this month.



#include <stdio.h>

int main() {
    int month, year;
    int days;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    printf("Enter the year: ");
    scanf("%d", &year);

    switch (month) {
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
        case 2:  
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29; 
            } else {
                days = 28; 
            }
            break;
        default:
            printf("Invalid month number.\n");
    }

    printf("Number of days in month %d of year %d is: %d\n", month, year, days);

}

