//WAP to accept 5 students name and store it in array
#include <stdio.h>
#include <string.h>

int main() {
    char names[5][100]; 
    int i;              
    
    printf("Enter the names of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        
        // Remove newline character if present
        size_t len = strlen(names[i]);
        if (len > 0 && names[i][len - 1] == '\n') {
            names[i][len - 1] = '\0';
        }
    }

    // Display the names of the students
    printf("\nStudent Names:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: %s\n", i + 1, names[i]);
    }
    
}

