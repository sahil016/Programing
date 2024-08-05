


#include <stdio.h>

int main() {
    int m, n;

    printf("Enter an integer value for m: ");
    scanf("%d", &m);

    if (m > 0) {
        n = 1;
    } else if (m == 0) {
        n = 0;
    } else { // m < 0
        n = -1;
    }

    printf("The value of n is: %d\n", n);

}

