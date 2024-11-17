//Program of Armstrong Number in C Using While Loop



#include <stdio.h>
#include <math.h> 

int main() {
    int num, originalNum, remainder, result = 0, n = 0;
    int temp;  

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;  // Store the original number for later comparison

    temp = num;    // Determine the number of digits in the number
    while (temp != 0) {
        temp /= 10;
        ++n;
    }
	temp = num;  
    while (temp != 0) {
        remainder = temp % 10; // Extract the last digit
        result += pow(remainder, n); // Add the power of the digit to the result
        temp /= 10; // Remove the last digit
    }

    if (result == originalNum) 
	{
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

}

