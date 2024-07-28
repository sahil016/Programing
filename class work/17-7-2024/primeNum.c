#include<stdio.h>
main()
{
	int i,n,c=0;
	printf("Enter Number: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("Number is prime");
	}
	else
	{
		printf("Number is not prime");
	}
}
