//Write a C program to determine eligibility for admission to a professional
//course based on the following criteria
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
//in Chem>=50 and Total in all three subject >=190 or Total in Maths and
//Physics >=140 --------------------------------------Input the marks obtained in
//Physics :65 Input the marks obtained in Chemistry :51 Input the marks
//obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
//188 Total marks of Maths and Physics : 137 The candidate is not eligible.


#include <stdio.h>

int main() {
    int marksPhysics, marksChemistry, marksMathematics;
    int totalMarksAll, totalMarksMathPhysics;

    // Input the marks obtained
    printf("Input the marks obtained in Physics: ");
    scanf("%d", &marksPhysics);
    
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &marksChemistry);
    
    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &marksMathematics);

    // Calculate total marks
    totalMarksAll = marksPhysics + marksChemistry + marksMathematics;
    totalMarksMathPhysics = marksMathematics + marksPhysics;

    // Determine eligibility
    if (marksMathematics >= 65 && marksPhysics >= 55 && marksChemistry >= 50 &&
        (totalMarksAll >= 190 || totalMarksMathPhysics >= 140)) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}

