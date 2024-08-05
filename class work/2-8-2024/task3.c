#include <stdio.h>

#define DAYS_IN_YEAR 365
#define LEAP_YEAR_DAYS 366

// Function to check if a year is a leap year
int isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

// Function to calculate total days considering leap years
int calculateDays(int years) {
    int total_days = 0;
    int i;  // Variable declared outside the for loop
    for (i = 0; i < years; i++) {
        if (isLeapYear(2024 + i)) {  // Assuming current year is 2024; adjust if needed
            total_days += LEAP_YEAR_DAYS;
        } else {
            total_days += DAYS_IN_YEAR;
        }
    }
    return total_days;
}

int main() {
    int years;
    
    // Input: number of years
    printf("Enter the number of years: ");
    scanf("%d", &years);
    
    // Calculate total days
    int total_days = calculateDays(years);
    
    // Output the result
    printf("%d years is equivalent to %d days.\n", years, total_days);

    return 0;
}

