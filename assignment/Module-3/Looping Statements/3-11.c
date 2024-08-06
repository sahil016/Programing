//Accept 5 names from user at run time


#include <stdio.h>
#include <string.h>  

int main() {
    char names[5][100];  
    int i;

    
    for (i = 0; i < 5; i++) {
        printf("Enter name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);

    
        size_t len = strlen(names[i]);
        if (len > 0 && names[i][len - 1] == '\n') {
            names[i][len - 1] = '\0';
        }
    }

    
    printf("\nYou entered the following names:\n");
    for (i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

}

