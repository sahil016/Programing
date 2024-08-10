#include<stdio.h>
main()
{
	FILE* fptr;
	
	fptr = fopen("text.txt","w");
	fprintf(fptr,"Hellow this is write method!!");
	fclose(fptr);
}
