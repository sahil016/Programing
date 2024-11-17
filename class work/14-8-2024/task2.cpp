#include<iostream>
using namespace std;

class print {
    public:
        int a, b;
        void show() {
            cout << "Enter Number 1: ";
            cin >> a;
            cout << "Enter Number 2: ";
            cin >> b;
        }
};

class add {
    public:
        void fun1() {
            int a, b;
            cout << "Enter Number 1: ";
            cin >> a;
            cout << "Enter Number 2: ";
            cin >> b;
            cout << "Addition is: " << a + b << endl;
        }
};

class sub {
    public:
        void fun2() {
            int a, b;
            cout << "Enter Number 1: ";
            cin >> a;
            cout << "Enter Number 2: ";
            cin >> b;
            cout << "Subtraction is: " << a - b << endl;
        }
};

class mul {
    public:
        void fun3() {
            int a, b;
            cout << "Enter Number 1: ";
            cin >> a;
            cout << "Enter Number 2: ";
            cin >> b;
            cout << "Multiplication is: " << a * b << endl;
        }
};

int main() {
    add Addition;
    sub B;
    mul C;
    print P;

    P.show();
    Addition.fun1();
    B.fun2();
    C.fun3();
}

