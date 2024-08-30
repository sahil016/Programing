#include<iostream>
using namespace std;

class A{
	public:
		myfun()
		{
			cout<<"hello"<<endl;
		}
};

class B:public A{
	public:
	myfun()
	{
		A::myfun();
		cout<<"welcom"<<endl;
	}
};

main()
{
	B obj;
	obj.myfun();
}
