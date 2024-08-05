//WAP to convert years into days and days into years


#include <stdio.h>

#define DAYS_IN_YEAR 365
#define LEAP_YEAR_DAYS 366

int isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int calculateDays(int years) {
    int total_days = 0;
    int i;  
    for (i = 0; i < years; i++) {
        if (isLeapYear(2024 + i)) {  
            total_days += LEAP_YEAR_DAYS;
        } else {
            total_days += DAYS_IN_YEAR;
        }
    }
    return total_days;
}

int main() {
    int years;
    
    printf("Enter the number of years: ");
    scanf("%d", &years);
    
    int total_days = calculateDays(years);
    
    printf("%d years is equivalent to %d days.\n", years, total_days);

    return 0;
}

