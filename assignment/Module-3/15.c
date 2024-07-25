#include <stdio.h>

int main() {
    char schoolName[100];
    int i = 0;


    printf("Enter the school's name: ");
    scanf("%[^\n]s", schoolName); 

    printf("Abbreviated form: ");

    if (schoolName[0] != '\0') {
        printf("%c", schoolName[0]);
    }


    while (schoolName[i] != '\0') {
       	
        if (schoolName[i] == ' ' && schoolName[i + 1] != '\0') {
            printf("%c", schoolName[i + 1]);
        }
        i++;
    }

    printf("\n");

    return 0;
}

