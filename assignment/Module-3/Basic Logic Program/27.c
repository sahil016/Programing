//Convert days into months


#include <stdio.h>

#define DAYS_IN_MONTH 30

int main() {
    int total_days;
    int months;
    int days_remaining;

    printf("Enter the number of days: ");
    scanf("%d", &total_days);

    months = total_days / DAYS_IN_MONTH;
    days_remaining = total_days % DAYS_IN_MONTH;

    printf("%d days is approximately %d months and %d days.\n", total_days, months, days_remaining);

    return 0;
}

