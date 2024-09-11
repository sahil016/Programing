//Convert years into days and months


#include <stdio.h>

int isLeapYear(int year) // Function to determine if a given year is a leap year
{
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int main() {
    int years;
    int total_days;
    int months;
    
    printf("Enter the number of years: ");
    scanf("%d", &years);
    
    int days_in_year = 365;
    int leap_year_days = 366;
    int months_in_year = 12;

    if (isLeapYear(2024 + years))  // Determine the total number of days based on whether the year 2024 + years is a leap year
	{
        total_days = years * leap_year_days;	// Use leap year days if it is a leap year
    } else {
        total_days = years * days_in_year;	// Use common year days otherwise
    }

    months = years * months_in_year;	// Calculate the total number of months

    printf("%d years is equivalent to %d months and %d days.\n", years, months, total_days);

}

