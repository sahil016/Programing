#include<iostream>
using namespace std;

class Hello{
	public:
		int a,b;
		hello1()
		{
			int a,b;
			cout<<"Enter A: ";
			cin>>a;
			cout<<"Enter B: ";
			cin>>b;
			this->a=a;
			this->b=b;
		}
		
		hello2()
		{
			cout<<"A: "<<this->a<<endl;
			cout<<"B: "<<this->b<<endl;
		}
		
};

main()
{
	Hello obj;
	obj.hello1();
	obj.hello2();
}
