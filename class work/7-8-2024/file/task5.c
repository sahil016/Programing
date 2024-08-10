#include<stdio.h>
main()
{
	FILE* fptr;
	
	fptr = fopen("text.txt","a");
	fprintf(fptr,"\nHellow this is append!!");
	fclose(fptr);
}
