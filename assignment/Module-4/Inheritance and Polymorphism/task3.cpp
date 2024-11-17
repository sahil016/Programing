//Write a C++ Program to show access to Private Public and Protected using Inheritance


#include<iostream>
using namespace std;


class Base {
private:
    int privateVar; 

protected:
    int protectedVar; 

public:
    int publicVar; 

    // Constructor with initialization list
    Base() : privateVar(10), protectedVar(20), publicVar(30) {
        // No code in the constructor body
    }

    // Method to display private member
    void displayPrivate() {
        cout << "Private Var: " << privateVar << endl;
    }

    // Method to display protected member
    void displayProtected() {
        cout << "Protected Var: " << protectedVar << endl;
    }

    // Method to display public member
    void displayPublic() {
        cout << "Public Var: " << publicVar << endl;
    }
};

class Derived : public Base {
public:
    // Constructor that initializes protected member
    Derived() {
        protectedVar = 40; // Accessing protected member of Base class
    }

    // Method to display inherited protected member
    void displayInheritedProtected() {
        cout << "Inherited Protected Var: " << protectedVar << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    // Accessing public members
    cout << "Base Class:" << endl;
    baseObj.displayPublic();

    // Accessing private member through public method
    baseObj.displayPrivate();

    // Accessing protected member through public method
    baseObj.displayProtected();

    cout << "\nDerived Class:" << endl;
    derivedObj.displayPublic();

    // Accessing protected member of base class
    derivedObj.displayInheritedProtected();

}
