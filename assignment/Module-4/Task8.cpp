 //Write a program to find the multiplication values and the cubic values using inline function  
 //An inline function is one for which the compiler copies the code from the function definition 
// directly into the code of the calling function rather than creating a separate set of 
//instructions in memory.
#include <iostream>
using namespace std;

// Inline function
inline multiply(int a, int b) {
    return a * b;
}

// Inline function to calculate cubic value
inline cube(int a) {
    return a * a * a;
}

main() {
    int num1, num2,product,cubic;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

  	product = multiply(num1, num2);
    cout << "Multiplication: " << product << endl;

    cubic = cube(num1);
    cout << "Cubic of " << num1 << ": " << cubic << endl;

}
