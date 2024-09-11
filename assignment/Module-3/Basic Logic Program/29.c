//Convert minutes into seconds and hours

#include <stdio.h>

int main() {
    int minutes;
    int hours;
    int seconds;
    
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);
    
    hours = minutes / 60;	 // Calculate the number of hours by dividing the minutes by 60
    int remaining_minutes = minutes % 60;	// Calculate the remaining minutes after converting to hours
    
    seconds = minutes * 60; // Calculate the total number of seconds by multiplying the minutes by 60
    
    printf("%d minutes is equivalent to %d hours, %d minutes, and %d seconds.\n", minutes, hours, remaining_minutes, seconds);
}

