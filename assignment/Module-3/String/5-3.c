//Write a program in C to print individual characters of a string in reverse order



#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
	int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0') {
        length++;
    }

    if (length > 0 && str[length - 1] == '\n') {
        length--;
    }

    for (i = length - 1; i >= 0; i--) {
        printf(" %c", str[i]);
    }

}

