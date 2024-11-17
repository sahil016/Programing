//Write a C program to check whether a triangle can be formed with the given values for the angles.



#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    printf("Enter the three angles of the triangle:\n");
    printf("Angle 1: ");
    scanf("%f", &angle1);
    
    printf("Angle 2: ");
    scanf("%f", &angle2);
    
    printf("Angle 3: ");
    scanf("%f", &angle3);

    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && (angle1 + angle2 + angle3 == 180))   // Check if the angles are positive and if their sum is exactly 180 degrees
	{
        printf("The angles can form a valid triangle.\n");
    } else {
        printf("The angles cannot form a valid triangle.\n");
    }

}

