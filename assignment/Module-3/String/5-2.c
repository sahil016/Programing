//Write a program in C to separate individual characters from a string.


#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Individual characters:\n");
    while (str[i] != '\0') {
        if (str[i] != '\n') {
            printf("%c\n", str[i]);
        }
        i++;
    }
}

