#include<iostream>
using namespace std;

class calculator{
	public:
	add(int a,int b)
	{
		return a+b;
	}
	
	sub(int a,int b)
	{
		return a-b;
	}
	
	mul(int a,int b)
	{
		return a*b;
	}
	
	
	float divide(int a,int b)
	{
		return a/b;
	}
};

main()
{
	calculator calc;
	int a,b;
	int choice;
	
	cout<<"1 for addition"<<endl;
	cout<<"2 for subtraction"<<endl;
	cout<<"3 for multiplication"<<endl;
	cout<<"4 for division"<<endl;
	cin>>choice;
	
	cout<<"Enter first number: "<<endl;
	cin>>a;
	cout<<"Enter second number: "<<endl;
	cin>>b;
	
	switch(choice)
	{
		case 1:
			cout<<"Result: "<<calc.add(a,b)<<endl;	
			break;
		case 2:
			cout<<"Result: "<<calc.sub(a,b)<<endl;	
			break;
		case 3:
			cout<<"Result: "<<calc.mul(a,b)<<endl;	
			break;
		case 4:
			cout<<"Result: "<<calc.divide(a,b)<<endl;	
			break;
		default:
			cout<<"Invalid choice!!"<<endl;
	}
}
