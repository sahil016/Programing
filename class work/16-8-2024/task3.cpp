#include<iostream>
using namespace std;
class A{
	public:
		home()
		{
			cout<<"Grandfather has home"<<endl;
		}
};

class F:public A{
	public:
		car()
		{
			cout<<"Father has car"<<endl;
		}
};

class C:public F{
	public:
		respect()
		{
			cout<<"Child has respect"<<endl;
		}
};

main()
{
	C obj;
	obj.home();
	obj.car();
	obj.respect();
}
