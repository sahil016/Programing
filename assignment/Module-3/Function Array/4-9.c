//WAP to show difference between Structure and Union

#include <stdio.h>
#include <string.h>

// Define a structure to hold employee details
struct Employee {
    int empno;             
    char empname[50];      
    float salary;          
};

// Define a union to hold different types of data
union Data {
    int intVal;            
    float floatVal;        
    char str[50];          
};

int main() {
    struct Employee emp;
    
    // Initialize the structure members
    emp.empno = 1001;
    strcpy(emp.empname, "Alice");
    emp.salary = 50000.50;

    // Display structure values
    printf("Structure Example:\n");
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Employee Salary: %.2f\n", emp.salary);

    union Data data;
    
    // Assign and display integer value in union
    data.intVal = 10;
    printf("\nUnion Example:\n");
    printf("Data as int: %d\n", data.intVal);

    // Assign and display float value in union
    data.floatVal = 15.75;
    printf("Data as float: %.2f\n", data.floatVal);

    // Assign and display string value in union
    strcpy(data.str, "Hello");
    printf("Data as string: %s\n", data.str);

    // Display values after overwriting with string
    printf("After overwriting with string:\n");
    printf("Data as int: %d\n", data.intVal);       // Shows unexpected value
    printf("Data as float: %.2f\n", data.floatVal); // Shows unexpected value
    printf("Data as string: %s\n", data.str);       // Shows the latest value

}

