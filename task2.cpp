#include <iostream>
using namespace std;

class A {
protected:
    int a, b;
};

class B : public A {
public:
     hello() {
        cout << "Hello" << endl;
    }
};

class C : public A {
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
    B obj;
    C obj1;
    
    obj.hello();
    obj1.Hello1();
    
}

