// Program of Armstrong Number in C Using For Loop 

#include <stdio.h>
#include <math.h> 

int main() {
    int num, originalNum, remainder, result = 0, n = 0;
    int temp;  

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number for later comparison

    temp = num;  // Determine the number of digits in the number
    for (; temp != 0; temp /= 10) {
        ++n;
    }

    temp = num;  // Reset temp to the original number for further processing
    for (; temp != 0; temp /= 10) // Calculate the sum of each digit raised to the power of n
	{
        remainder = temp % 10; // Extract the last digit
        result += pow(remainder, n);  // Add the power of the digit to the result
    }

    if (result == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

}

