#include<stdio.h>
main()
{
	char a[5],b[5];
	
	printf("Enter Striong 1: ");
	gets(a);	
	printf("Enter Striong 2: ");
	gets(b);	
	
	int n = strcmp(a,b);
	
	printf("%d",n);
}
