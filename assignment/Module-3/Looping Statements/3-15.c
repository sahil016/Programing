//Calculate sum of 10 numbers using of while loop

#include <stdio.h>

int main() {
    int i = 0;
    int sum = 0;
    int num;

    printf("Enter 10 integers:\n");
    while (i < 10) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num);
        sum += num;
        i++;
    }

    printf("\nSum of the entered numbers = %d\n", sum);

}

