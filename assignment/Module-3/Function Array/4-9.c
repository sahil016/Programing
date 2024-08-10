//WAP to show difference between Structure and Union


#include <stdio.h>
#include <string.h>

struct Employee {
    int empno;
    char empname[50];
    float salary;
};

union Data {
    int intVal;
    float floatVal;
    char str[50];
};

int main() {
    struct Employee emp;
    
    emp.empno = 1001;
    strcpy(emp.empname, "Alice");
    emp.salary = 50000.50;

    printf("Structure Example:\n");
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Employee Salary: %.2f\n", emp.salary);

    union Data data;
    
    data.intVal = 10;
    printf("\nUnion Example:\n");
    printf("Data as int: %d\n", data.intVal);

    data.floatVal = 15.75;
    printf("Data as float: %.2f\n", data.floatVal);

    strcpy(data.str, "Hello");
    printf("Data as string: %s\n", data.str);

    printf("After overwriting with string:\n");
    printf("Data as int: %d\n", data.intVal);
    printf("Data as float: %.2f\n", data.floatVal);
    printf("Data as string: %s\n", data.str);

}

