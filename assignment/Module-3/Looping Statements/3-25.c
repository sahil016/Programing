#include<stdio.h>
int main()
{
	int n,i,total=0;
	printf("Enter Number: ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		int sum=i*(i+1)/2; // Calculate the sum of the first i natural numbers using the formula i * (i + 1) / 2
		total+=sum;  // Add the calculated sum to the total
	}
	printf("The total sum of the series is %d\n",total);	
	
}
