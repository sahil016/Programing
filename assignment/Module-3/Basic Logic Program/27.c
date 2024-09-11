//Convert days into months


#include <stdio.h>

int main() {
    int total_days;
    int months;
    int days_remaining;
    int days_in_month = 30; // Approximate days in a month

    printf("Enter the number of days: ");
    scanf("%d", &total_days);

    months = total_days / days_in_month;	// Calculate the number of full months by dividing total_days by days_in_month
    days_remaining = total_days % days_in_month;	 // Calculate the remaining days after accounting for full months

    printf("%d days is approximately %d months and %d days.\n", total_days, months, days_remaining);

}

