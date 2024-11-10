//Write a program of Addition, Subtraction, Division, Multiplication using constructor. 
#include<iostream>
using namespace std;
class Hello{
	public:
		Hello(){	//constructor
			int a, b, add, subtract, multiply;
			float divide;
			cout << "enter two integer: ";
	    	cin >> a;
	    	cin >> b;
	    
		    add = a + b;
		    subtract= a - b;
		    multiply= a * b;
		    divide= a /(float)b;   //typecasting
		    
		    cout<<"Sum = " <<add<<endl;
		    cout<<"Difference = " << subtract<<endl;
		    cout<<"Multiplication = " << multiply<<endl;
		    cout<<"Division = " << divide<<endl; 
	}
};
main(){
	Hello obj;
}

