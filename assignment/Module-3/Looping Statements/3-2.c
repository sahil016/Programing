//WAP to accept 5 numbers from user and display all numbers


#include<stdio.h>
int main()
{
	int n[5],i;
	for(i=0;i<5;i++)	// Loop to accept 5 numbers from the user
	{
		printf("Enter number %d: ",i+1);
		scanf("%d",&n[i]);
	}
	printf("\n The numbers you entered are: \n");
	for(i=0;i<5;i++)  // Loop to display the numbers entered by the user
	{
		printf("\n Number %d is %d",i+1,n[i]);
	}
}
