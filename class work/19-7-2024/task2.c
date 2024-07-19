#include<stdio.h>
#include<stdlib.h>
main()
{
	int randomNumber;
	randomNumber= rand() % 5;
	printf("%d",randomNumber);
	return 0;
}
