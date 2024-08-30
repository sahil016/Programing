#include<iostream>
using namespace std;

class Myclass{
	public:
		Myclass(int a,int b) //parametrised constructor
		{
			cout<<"A: "<<a;
			cout<<"\nB: "<<b;
		}
};

main()
{
	Myclass obj(100,10);
}
