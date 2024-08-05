//Convert years into days and months


#include <stdio.h>

#define MONTHS_IN_YEAR 12
#define DAYS_IN_YEAR 365
#define LEAP_YEAR_DAYS 366

int isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int main() {
    int years;
    int total_days;
    int months;
    
    printf("Enter the number of years: ");
    scanf("%d", &years);
    
    if (isLeapYear(years)) {
        total_days = years * LEAP_YEAR_DAYS;
    } else {
        total_days = years * DAYS_IN_YEAR;
    }

    months = years * MONTHS_IN_YEAR;

    printf("%d years is equivalent to %d months and %d days.\n", years, months, total_days);

    return 0;
}

