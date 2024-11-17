#include<iostream>
using namespace std;

class A{
	public:
		fun1(int a, int b)
		{
			cout<<"Hello"<<endl;
		}
		fun1()
		{
			cout<<"Welcome"<<endl;
		}
		fun1(string a, string b)
		{
			cout<<"wow!";
		}
};

main()
{
	A obj;
	obj.fun1(10,20);
	obj.fun1();
	obj.fun1("sahil","divan");
}
