//WAP to accept 5 numbers from user and display all numbers


#include<stdio.h>
int main()
{
	int n[5],i;
	for(i=0;i<5;i++)
	{
		printf("Enter number %d: ",i+1);
		scanf("%d",&n[i]);
	}
	printf("\n The numbers you entered are: \n");
	for(i=0;i<5;i++)
	{
		printf("\n Number %d is %d",i+1,n[i]);
	}
}
