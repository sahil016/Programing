#include<stdio.h>
int main()
{
	int n,i,total=0;
	printf("Enter Number: ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		int sum=i*(i+1)/2;
		total+=sum;
	}
	printf("The total sum of the series is %d\n",total);	
	
}
