#include<stdio.h>
struct Mystructure{
	int a[5],b[5]; //data members
}s1;

main()
{
	//struct My structure s1; //variable of structure
	printf("Enter Number 1: ");
	scanf("%d",&s1.a);
	printf("Enter Number 2: ");
	scanf("%d",&s1.b);
	printf("%d",s1.a+s1.b);	
}
