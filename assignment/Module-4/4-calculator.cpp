// WAP to create simple calculator using class 
#include<iostream>
using namespace std;

class Calculator {
	public:
    //add two numbers
    add(int a, int b) {
        a + b;
    }

    //subtract two numbers
    subtract(int a, int b) {
        a - b;
    }

    // Method to multiply two numbers
    multiply(int a, int b) {
        a * b;
    }

    //divide two numbers
    divide(int a, int b) {
        	a / b;
        }
};

main() {
    Calculator calc;
    int a,b;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;
    
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Result: " << calc.add(a, b) << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract(a, b) << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply(a, b) << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide(a, b) << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }


}

