#include <iostream>
using namespace std;

class C {
public:
    int a, b;
    int c;
};

class B : public C {
public:
    hello() {
        
        
        cout << "Enter A: ";
        cin >> a;
        cout << "Enter B: ";
        cin >> b;
        
        cout << "A: " << a << endl;
        cout << "B: " << b << endl;
    }
};

class A{
public:
    hello1() {
	cout << "Hello" << endl;
    }
};

class D : public B, public A {
public:
    hello2() {
        cout << "Enter C: ";
        cin >> c;
        cout << "C: " << c << endl;
    }
};

int main() {
    D obj;
    
    obj.hello();
    obj.hello1();
    obj.hello2();
    
}

