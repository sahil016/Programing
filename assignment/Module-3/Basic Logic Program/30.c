//WAP to convert years into days and days into years


#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int calculateDays(int years) 
{
    int total_days = 0;
    int i;  
    for (i = 0; i < years; i++) {
        if (isLeapYear(2024 + i)) {  
            total_days += 366;
        } else {
            total_days += 365;
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

    int days;
    
    printf("Enter the number of days: ");
    scanf("%d", &days);
    
     // Calculate the number of years from the given number of days
    int years_from_days = days / 365;
    int remaining_days = days % 365;

    // Adjust for leap years
    int leap_years = (days + 1) / 366; // Approximate number of leap years
    years_from_days += leap_years;

    printf("%d days is approximately equivalent to %d years and %d days.\n", days, years_from_days, remaining_days);

}

