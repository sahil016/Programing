//patterns

#include <stdio.h>

int firstP()
{
	 int i; 
    int j; 
    int rows = 5; 

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            if (j % 2 == 1) {
                printf(" 1");
            } else {
                printf(" 0");
            }
        }
        printf("\n");
    }
    printf("\n");
}



void secondP()
{
    char start = 'A';  
    int i, j;  

    for (i = 1; i <= 4; i++)  
    {  
        for (j = 1; j <= i; j++)  
        { 
            printf(" %c", start);
            start++;  
        }
        printf("\n"); 
    }
    printf("\n");
}

int thirdP()
{
	int i; 
    int j; 
    int n = 1; 

    for (i = 1; i <= 5; i++) 
	{
        for (j = 1; j <= i; j++) 
		{
            printf(" %d",n);
            n++;
        }
        printf("\n");
    }
    printf("\n");
}

void fourthP()
{
int i, j;  

    for (i = 1; i <= 5; i++)  
    {
        for (j = 0; j < i; j++)  
        {
            printf("%c", 65 + j); 
        }
        printf("\n");  
    }
	printf("\n\n");
}

fifthP()
{
	int i,k,j;
	for(i=1;i<=4;i++)
	{
		for(k=1;k<=4-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
		printf("\n");
}

sixthP()
{
	int i, j;  
    int maxStars = 5;  

   
    for (i = 1; i <= maxStars; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");  
    }

    for (i = maxStars - 1; i >= 1; i--)  
    {
        for (j = 1; j <= i; j++)  
        {
            printf("*");
        }
        printf("\n"); 
    }
}


int main() 
{
	firstP();
	secondP();
	thirdP();
	fourthP();
	fifthP();
	sixthP();
}


