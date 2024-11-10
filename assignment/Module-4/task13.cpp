//Write a C++ program to implement a class called Employee that has
//private member variables for name, employee ID, and salary. Include
//member functions to calculate and set salary based on employee
//performance. Using of constructo

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    // Constructor to initialize the employee details
    Employee(const string& empName, int empID, double empSalary)
        : name(empName), employeeID(empID), salary(empSalary) {}

    // Function to set the employee's ID
    void setEmployeeID(int empID) {
        employeeID = empID;
    }

    // Function to set the employee's salary
    void setSalary(double newSalary) {
        salary = newSalary;
    }

    // Function to get the employee's name
    string getName() const {
        return name;
    }

    // Function to get the employee's ID
    int getEmployeeID() const {
        return employeeID;
    }

    // Function to calculate salary based on performance rating
    void calculateSalary(double performanceRating) {
        if (performanceRating >= 90) {
            salary += salary * 0.20; // 20% bonus for high performance
        } else if (performanceRating >= 75) {
            salary += salary * 0.10; // 10% bonus for medium performance
        } else {
            salary += salary * 0.05; // 5% bonus for low performance
        }
    }

    // Function to display employee details
    void displayDetails() const {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $ " << salary << endl;
    }
};

int main() {
    // Create an Employee object using the constructor
    Employee emp1("John Doe", 12345, 50000.0);

    // Display initial details
    cout << "Initial Employee Details:" << endl;
    emp1.displayDetails();

    // Get performance rating and calculate new salary
    double performanceRating;
    cout << "\nEnter performance rating (0-100): ";
    cin >> performanceRating;

    emp1.calculateSalary(performanceRating);

    // Display updated details
    cout << "\nUpdated Employee Details:" << endl;
    emp1.displayDetails();

    return 0;
}

