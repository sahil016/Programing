//Write a program to swap the two numbers using friend function without using third variable  
#include <iostream>
using namespace std;

class Numbers{
    int a, b;
	public:
    void setValues(int x, int y) {
        a = x;
        b = y;
    }
    // Friend function declaration
    friend swapNumbers(Numbers& num);

    display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};
	swapNumbers(Numbers& num) {
    num.a= num.a+num.b;  // a = a + b
    num.b= num.a-num.b;  // b = (a + b) - b = a
    num.a= num.a-num.b;  // a = (a + b) - a = b
}

int main() {
    Numbers num;
    num.setValues(10, 20);
    cout << "Before swapping:" << endl;
    num.display();
    swapNumbers(num);
    cout << "After swapping:" << endl;
    num.display();
}

