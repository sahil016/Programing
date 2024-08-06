#include<stdio.h>
main()
{
	char a[5],b[5];
	int i,j,sum=0,sum1=0;
	
	printf("Enter Striong 1: ");
	gets(a);	
	printf("Enter Striong 2: ");
	gets(b);	
	
	printf("String concat is: %s",strcat(a,b));
	
}

