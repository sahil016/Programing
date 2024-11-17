// check pass or fail


#include <stdio.h>

int main() {
    int marks;
    int passingMark = 50; 

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= passingMark) // checks if marks greater than passing mark
	{
        printf("You have passed.\n");
    } else {
        printf("You have failed.\n");
    }

}

