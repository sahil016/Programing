#include<iostream>
using namespace std;

class A{
	public:
	fun()
	{
		cout<<"perent class";
	}
};

class B:public A{
	public:
	fun2()
	{
			cout<<"\nchild class";
	}
};

main()

{
	B obj;
	obj.fun();
	obj.fun2();
}
