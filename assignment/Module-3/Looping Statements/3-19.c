#include <stdio.h>

// Function to print the first pattern
void firstP()
{
    int i, j; 
    int rows = 5; 

    // Loop through each row
    for (i = 1; i <= rows; i++) {
        // Loop through each column in the current row
        for (j = 1; j <= i; j++) {
            // Print '1' if the column number is odd, otherwise print '0'
            if (j % 2 == 1) {
                printf(" 1");
            } else {
                printf(" 0");
            }
        }
        // Move to the next line after printing all columns in the current row
        printf("\n");
    }
    printf("\n");
}

// Function to print the second pattern
void secondP()
{
    char start = 'A';  
    int i, j;  

    // Loop through each row
    for (i = 1; i <= 4; i++)  
    {  
        // Loop through each column in the current row
        for (j = 1; j <= i; j++)  
        { 
            // Print the current character and increment it
            printf(" %c", start);
            start++;  
        }
        // Move to the next line after printing all columns in the current row
        printf("\n"); 
    }
    printf("\n");
}

// Function to print the third pattern
int thirdP()
{
    int i, j; 
    int n = 1; 

    // Loop through each row
    for (i = 1; i <= 5; i++) 
    {
        // Loop through each column in the current row
        for (j = 1; j <= i; j++) 
        {
            // Print the current number and increment it
            printf(" %d", n);
            n++;
        }
        // Move to the next line after printing all columns in the current row
        printf("\n");
    }
    printf("\n");
}

// Function to print the fourth pattern
void fourthP()
{
    int i, j;  

    // Loop through each row
    for (i = 1; i <= 5; i++)  
    {
        // Loop through each column in the current row
        for (j = 0; j < i; j++)  
        {
            // Print the character based on the column index (A=65, B=66, etc.)
            printf("%c", 65 + j); 
        }
        // Move to the next line after printing all columns in the current row
        printf("\n");  
    }
    printf("\n");
}

// Function to print the fifth pattern
void fifthP()
{
    int i, k, j;
    // Loop through each row
    for(i = 1; i <= 4; i++)
    {
        // Print spaces to align the stars to the right
        for(k = 1; k <= 4 - i; k++)
        {
            printf(" ");
        }
        // Print stars in each column of the current row
        for(j = 1; j <= i; j++)
        {
            printf(" *");
        }
        // Move to the next line after printing all columns in the current row
        printf("\n");
    }
    printf("\n");
}

// Function to print the sixth pattern
void sixthP()
{
    int i, j;  
    int maxStars = 5;  

    // Print the upper half of the pattern (increasing number of stars)
    for (i = 1; i <= maxStars; i++) 
    {
        // Print stars in each column of the current row
        for (j = 1; j <= i; j++) 
        {
            printf("*");
        }
        // Move to the next line after printing all columns in the current row
        printf("\n");  
    }

    // Print the lower half of the pattern (decreasing number of stars)
    for (i = maxStars - 1; i >= 1; i--)  
    {
        // Print stars in each column of the current row
        for (j = 1; j <= i; j++)  
        {
            printf("*");
        }
        // Move to the next line after printing all columns in the current row
        printf("\n"); 
    }
}

int main() 
{
    firstP(); // Call the function to print the first pattern
    secondP(); // Call the function to print the second pattern
    thirdP(); // Call the function to print the third pattern
    fourthP(); // Call the function to print the fourth pattern
    fifthP(); // Call the function to print the fifth pattern
    sixthP(); // Call the function to print the sixth pattern

}

