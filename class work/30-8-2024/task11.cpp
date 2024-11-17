#include<iostream>
using namespace std;

class Hello{
	public:
		info()
		{
			cout<<"vehical details are: "<<endl;
		}
		virtual color()=0; //pure virtual function
		virtual wheel()=0; //pure virtual function

};

class Car:public Hello{
	public:
		color()
		{
			cout<<"color: balck"<<endl;
		}
		wheel()
		{
			cout<<"4 wheels"<<endl;
		}
};

class Truck:public Hello{
	public:
		color()
		{
			cout<<"color: black"<<endl;
		}
		wheel()
		{
			cout<<"6 wheels"<<endl;
		}
};

class Bike:public Hello{
	public:
		color()
		{
			cout<<"color: red"<<endl;
		}
		wheel()
		{
			cout<<"2 wheels"<<endl;
		}
};


main()
{
	Car obj;
	obj.info();
	obj.color();
	obj.wheel();
	
	Truck obj1;
	obj.info();
	obj.color();
	obj.wheel();
	
	Bike obj2;
	obj.info();
	obj.color();
	obj.wheel();
}
