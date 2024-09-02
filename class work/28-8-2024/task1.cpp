#include<iostream>
using namespace std;
class  Bank{
	public:
		string name;
		int acno,balance=5000;
		int depo,wth;
		acopen()
		{
			cout<<"Name: ";
			cin>>name;
			cout<<"Ac no: ";
			cin>>acno;
			
			cout<<"Deposit is : "<<balance<<endl;
			
			this-> balance = balance;
		}
		
		deposit()
		{
			int depo;
			cout<<"Enter amount for deposit: "<<endl;
			cin>>depo;
			
			this->depo=depo;
			
			this->balance=this->balance+this->depo;
			
			cout<<"Now your balance is: "<<this->balance<<endl;
		}
		
		withdraw()
		{
			int wth;
			cout<<"Enter Amount for withdraw"<<endl;
			cin>>wth;
			
			this->wth=wth;
			
			this->balance= this->balance-this->wth;
			
			cout<<"Now your balance is: "<<this->balance<<endl;
			
			
		}
};


main()
{
	Bank obj;
	obj.acopen();
	obj.deposit();
	obj.withdraw();
}
