// WAP to find the largest of three numbers

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int largest;

    // Check if 'a' is greater than or equal to both 'b' and 'c'
    if (a >= b && a >= c) {
        largest = a;  // If true, 'a' is the largest number
    } 
    // Check if 'b' is greater than or equal to both 'a' and 'c'
    else if (b >= a && b >= c) {
        largest = b;  // If true, 'b' is the largest number
    } 
    // If neither 'a' nor 'b' is the largest, 'c' must be the largest
    else {
        largest = c;  // If true, 'c' is the largest number
    }

    printf("The largest number is: %d\n", largest);

}

