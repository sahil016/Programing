//Write a program of to swap the two values using templates  
#include <iostream>
using namespace std;
// Template function 
template <typename T>
	swapVal(T &a, T &b) {
    T temp = a;
    a = b;       
    b = temp;    
}

int main() {
    int x = 10, y = 20;
    cout<<"Before swapping: "<<endl;
    cout <<"x = "<<x<<",y = "<<y<<endl;
    swapVal(x, y);
    cout<<"After swapping: "<<endl;
    cout<<"x= "<<x<<",y = "<<y<<endl;
}

