//WAP to show difference between Structure and Union


#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

union Data {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    struct Employee emp;
    emp.id = 1;
    snprintf(emp.name, sizeof(emp.name), "John Doe");
    emp.salary = 50000.0;

    union Data data;
    data.intValue = 10;

    printf("Structure:\n");
    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Salary: %.2f\n", emp.salary);

    printf("\nUnion:\n");
    printf("Union intValue: %d\n", data.intValue);
    data.floatValue = 3.14;
    printf("Union floatValue: %.2f\n", data.floatValue);
    data.charValue = 'A';
    printf("Union charValue: %c\n", data.charValue);

    printf("Union intValue after setting charValue: %d\n", data.intValue);

}

