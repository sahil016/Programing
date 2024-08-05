// check if two integers are equal



#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the number 1 :");
	scanf("%d",&a);
	printf("Enter the number 2 :");
	scanf("%d",&b);
	if(a==b)
	{
		printf("%d is equal to %d",a,b);
		
	}else{
		printf("%d is not equal to %d",a,b);
	}
}
