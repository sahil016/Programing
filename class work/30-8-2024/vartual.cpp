#include<iostream>
using namespace std;

class Employee{
	public:
		info()
		{
			cout<<"Your salary will transfer in your account!!"<<endl;
		}
		virtual salary()=0; //pure virtual function
};

class Nishit:public Employee{
	public:
		salary()
		{
			cout<<"Nishit salary is 10 k"<<endl;
		}
};

class Meet:public Employee{
	public:
		salary()
		{
			cout<<"Meet salary is 29 k"<<endl;
		}
};

class Rahul:public Employee{
	public:
		salary()
		{
			cout<<"Rahul salary is 16 k"<<endl;
		}
};


main()
{
	Nishit obj;
	obj.info();
	obj.salary();
	
	Meet obj1;
	obj.info();
	obj.salary();

	Rahul obj2;
	obj.info();
	obj.salary();

}
