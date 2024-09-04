//Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa
#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    int i;

    printf("Enter a sentence: ");
    fgets(sentence, 1000, stdin);

    // Remove the trailing newline character, if any
    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == '\n') {
            sentence[i] = '\0';
            break;
        }
    }

    // Process the sentence to swap cases
    for (i = 0; sentence[i] != '\0'; i++) {
        if (islower(sentence[i])) {
            sentence[i] = toupper(sentence[i]);
        } else if (isupper(sentence[i])) {
            sentence[i] = tolower(sentence[i]);
        }
        // Non-alphabetic characters remain unchanged
    }

    printf("Modified sentence: %s\n", sentence);

}

