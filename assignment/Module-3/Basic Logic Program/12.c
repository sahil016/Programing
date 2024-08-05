#include<stdio.h>
int main()
{
	int students,apples;
	printf("Enter number of students: ");
	scanf("%d",&students);
	
	//to give 5 apples to each student//
	apples = students * 5;
	
	printf("The total number of apples required is: %d\n",apples);
}
