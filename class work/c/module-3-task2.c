#include<stdio.h>
void add();
void subtract();
void multiply();
void divide();

int main()
{
	int choice;
	printf("\nSimple calculator\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	scanf("%d",choice);
	
	switch(choice){
		case 1:
			add();
			break;
		case 2:
			subtract();
			break;
		case 3:
			multiply();
			break;
		case 4:
			divide();
			break;
		default:
			printf("Invalid choice! please try again.\n");
	}
}

void add() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a + b);
}

