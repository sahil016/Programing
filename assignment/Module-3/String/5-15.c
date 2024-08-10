//Write a program in C to find the largest and smallest words in a string.



#include <stdio.h>
#include <string.h>

int main() {
    char str[100], largest[100], smallest[100];
    char *word;
    int first = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    word = strtok(str, " ");
    while (word != NULL) {
        if (first) {
            strcpy(largest, word);
            strcpy(smallest, word);
            first = 0;
        } else {
            if (strlen(word) > strlen(largest)) {
                strcpy(largest, word);
            }
            if (strlen(word) < strlen(smallest)) {
                strcpy(smallest, word);
            }
        }
        word = strtok(NULL, " ");
    }

    if (first) {
        printf("No words found.\n");
    } else {
        printf("Largest word: %s\n", largest);
        printf("Smallest word: %s\n", smallest);
    }

}

