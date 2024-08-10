//.Write a program in C to find the number of times a given word 'is' appears in the given string



#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    const char *word = "is";
    int count = 0;
    char *ptr;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    ptr = strstr(str, word);
    while (ptr != NULL) {
        count++;
        ptr = strstr(ptr + 1, word);
    }

    printf("The word '%s' appears %d times.\n", word, count);

}

