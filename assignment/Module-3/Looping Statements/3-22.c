#include<stdio.h>
int main()
{
	int n,rev;
	printf("Enter Number: ");
	scanf("%d",&n);
	while(n>0) // Reverse the digits of the number
	{
		rev=n%10;  // Extract the last digit of n
		printf("%d",rev);
		n=n/10; // Remove the last digit from n
	}
}
