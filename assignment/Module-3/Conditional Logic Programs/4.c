//simple calculator


#include <stdio.h>

int main() {
    int num1, num2, result;
    int operation;
    double divResult;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

	//print operation 
    printf("Choose an operation:\n");
    printf("1 - Addition\n");
    printf("2 - Subtraction\n");
    printf("3 - Multiplication\n");
    printf("4 - Division\n");
    printf("5 - Modulo\n");
    printf("Enter the number corresponding to the operation: ");
    scanf("%d", &operation);

	//using switch case to do choosed operation
    switch (operation) {
        case 1:
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                divResult = (double)num1 / num2;
                printf("Result: %d / %d = %.2lf\n", num1, num2, divResult);
            } else {
                printf("Error: Division by zero is undefined.\n");
            }
            break;
        case 5:
            if (num2 != 0) {
                result = num1 % num2;
                printf("Result: %d %% %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Modulo by zero is undefined.\n");
            }
            break;
        default:
            printf("Error: Invalid operation.\n");
            break;
    }

}

