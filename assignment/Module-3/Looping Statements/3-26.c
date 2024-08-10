#include <stdio.h>

int main() {
    int n,i;
    double total_sum = 0.0;

    printf("Enter the Number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        double term = (double)i / (i + 1);
        
        if ((i - 1) % 4 == 0) {
            total_sum += term;  
        } else {
            total_sum -= term;  
        }
    }

    printf("The total sum of the series is: %.4f\n", total_sum);

}

