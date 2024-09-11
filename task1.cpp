#include <iostream>
using namespace std;

class A {
protected:
    int a, b;
};

class B {
public:
    hello() {
        cout << "Hello" << endl;
    }
};

class C : public A, public B {
public:
    Hello1() {
        cout << "Enter A: ";
        cin >> a;
        cout << "Enter B: ";
        cin >> b;
        
        cout << "A: " << a << endl;
        cout << "B: " << b << endl;
    }
};

int main() {
    A objA;
    B objB;
    C objC;
    
    objB.hello();
    objC.Hello1();
    
}

