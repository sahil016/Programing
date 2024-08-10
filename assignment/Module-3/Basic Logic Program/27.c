//Convert days into months


#include <stdio.h>

int main() {
    int total_days;
    int months;
    int days_remaining;
    int days_in_month = 30; // Approximate days in a month

    printf("Enter the number of days: ");
    scanf("%d", &total_days);

    months = total_days / days_in_month;
    days_remaining = total_days % days_in_month;

    printf("%d days is approximately %d months and %d days.\n", total_days, months, days_remaining);

}

