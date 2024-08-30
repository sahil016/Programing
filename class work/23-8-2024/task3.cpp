#include<iostream>
using namespace std;

class A{
	public:
		myfun()
		{
			cout<<"hello"<<endl;
		}
};

class B{
	public:
	myfun()
	{
	
		cout<<"welcom"<<endl;
	}
};

class C:public A, public B{
	public:
	myfun()
	{
		A::myfun();
		B::myfun();
		cout<<"!!"<<endl;	
	}	
};



main()
{
	C obj;
	obj.myfun();
}
