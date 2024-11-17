#include<iostream>
using namespace std;
class A{
	public:
		int a,b;
		show()
		{
			cout<<"Enter Number 1: ";
			cin>>a;
			cout<<"Enter Number 2: ";
			cin>>b;
			
		}
		
		fun1()
		{
			cout<<"Addition is : "<<a+b<<endl;
		}
};

main()
{
	show();
	fun1();
	fun2();
}
