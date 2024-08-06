//WAP to print factorial of given number


#include<stdio.h>
int main()
{
	int num,i,factorial=1;
	
	printf("Enter a number to find factorial: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		factorial *= i;
	}
	printf("factorial is :%d",factorial);
}
