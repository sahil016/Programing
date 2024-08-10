//Write a program in C to remove characters from a string except alphabets.



#include <stdio.h>

int main() {
    char str[100];
    char result[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';  

    printf("String with only alphabets: %s\n", result);

}

