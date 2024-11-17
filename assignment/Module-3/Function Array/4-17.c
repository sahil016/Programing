//WAP to show difference between Structure and Union


#include <stdio.h>

// Define a structure to represent an Employee
struct Employee {
    int id;          
    char name[50];   
    float salary;    
};

// Define a union to hold different types of data
union Data {
    int intValue;    
    float floatValue;
    char charValue;  
};

int main() {
    // Create and initialize an Employee structure
    struct Employee emp;
    emp.id = 1;
    snprintf(emp.name, sizeof(emp.name), "John Doe"); // Safe string copy
    emp.salary = 50000.0;

    // Create and initialize a Data union
    union Data data;
    data.intValue = 10; // Set integer value

    // Output the Employee structure details
    printf("Structure:\n");
    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Salary: %.2f\n", emp.salary);

    // Output the Data union details
    printf("\nUnion:\n");
    printf("Union intValue: %d\n", data.intValue); 
    data.floatValue = 3.14; // Set float value
    printf("Union floatValue: %.2f\n", data.floatValue); 
    data.charValue = 'A'; // Set character value
    printf("Union charValue: %c\n", data.charValue); 

    printf("Union intValue after setting charValue: %d\n", data.intValue);

\}

