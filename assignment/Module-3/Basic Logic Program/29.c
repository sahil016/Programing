//Convert minutes into seconds and hours

#include <stdio.h>

int main() {
    int minutes;
    int hours;
    int seconds;
    
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);
    
    hours = minutes / 60;
    int remaining_minutes = minutes % 60;
    
    seconds = minutes * 60;
    
    printf("%d minutes is equivalent to %d hours, %d minutes, and %d seconds.\n", minutes, hours, remaining_minutes, seconds);

    return 0;
}










