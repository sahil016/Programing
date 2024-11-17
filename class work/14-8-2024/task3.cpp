#include<iostream>
using namespace std;

class hello {
public:
    hello() // Constructor
    {
        cout << "Welcome to our website" << endl;
    }

    void reverse() // Function to reverse a number
    {
        int n, rev = 0, res = 0;
        cout << "Enter number: ";
        cin >> n;
        while (n != 0) {
            res = n % 10;
            rev = rev * 10 + res;
            n /= 10;
        }
        cout << "Reversed number is: " << rev << endl;
    }

    ~hello() // Destructor
    {
        cout << "Thank you for using our website!!" << endl;
    }	
};

int main() {
    hello obj; // Object creation
    obj.reverse(); 
}

