//Write a program in C to combine two strings manually



#include <stdio.h>

int main() {
    char str1[100], str2[100], combined[200];
    int i = 0, j = 0;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    while (str1[i] != '\0' && str1[i] != '\n') {
        combined[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0' && str2[j] != '\n') {
        combined[i] = str2[j];
        i++;
        j++;
    }
    combined[i] = '\0';

    printf("Combined string: %s\n", combined);

}

