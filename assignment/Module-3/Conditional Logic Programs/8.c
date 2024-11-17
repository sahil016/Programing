//check if you are tall or not


#include <stdio.h>

int main() {
    float height;

    printf("Enter your height in centimeters: ");
    scanf("%f", &height);

    if (height < 150.0) //checks if height less than 150.0
	{
        printf("You are categorized as Short.\n");
    } else if (height >= 150.0 && height <= 180.0) 
	{
        printf("You are categorized as Average.\n");
    } else 
	{
        printf("You are categorized as Tall.\n");
    }

}

