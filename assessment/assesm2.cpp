#include <iostream>
using namespace std;

float totalBill = 0;
 
class CalAmount {
public:
    float prices[4] = {180, 100, 120, 150};

    float calculateAmount(int choice, int quantity) {
        if (choice < 1 || choice > 4) {
            cout << "Invalid choice!" << endl;
            return 0;
        }
        return prices[choice - 1] * quantity;
    }
};

class Display {
public:
    Display() 
	{
        cout << "-----------------Menu-----------------" << endl;
        cout << "1. Pizza" << endl;
        cout << "2. Burgers" << endl;
        cout << "3. Sandwich" << endl;
        cout << "4. Biriyani" << endl;
    }
};

class Derived {
public:
    void order(CalAmount &calc) {
        int choice, quantity;
        cout << "What would you like to order? (1-4): ";
        cin >> choice;
        
        if (choice < 1 || choice > 4) {
            cout << "Invalid choice!" << endl;
            return;
        }
        
        if(choice==3)
        {
        	sandwichOrder();
		}
        
        cout << "Enter quantity: ";
        cin >> quantity;

        float amount = calc.calculateAmount(choice, quantity);
        cout << "Total amount for your order: " << amount << endl;
    }

    void sandwichOrder() {
        int choice2,quantity;
        float sandwichPrices[3] = {160, 100, 100};
        cout << "---- Sandwich Menu ----" << endl;
        cout << "1. Club Sandwich Rs.160" << endl;
        cout << "2. Veg. Crispy Sandwich Rs.100" << endl;
        cout << "3. Extrem Veg Sandwich Rs.100" << endl;
        cout << "Please enter which sandwich you would like to have (1-3): ";
        cin >> choice2;

        switch (choice2) 
		{
            case 1:
                cout << "You ordered Club Sandwich." << endl;
                break;
            case 2:
                cout << "You ordered Veg. Crispy Sandwich." << endl;
                break;
            case 3:
                cout << "You ordered Extrem Veg Sandwich." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
        cout<<"Please Enter quantity: ";
        cin>>quantity;
        
        float sandwichTotal = sandwichPrices[choice2 -1] * quantity;
        totalBill += sandwichTotal; 

		cout<<"Your total bill is "<<totalBill<<endl;
    }
    
};

int main() {
	char moreOrder;
    cout << "\t\t\t----Tops Tech. Fast Food----" << endl;
    Display dis;
    CalAmount calc;
    Derived derived;

    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello " << name << endl;
	while(1)
	{
    	derived.order(calc); // Order from main menu
    	cout<<"Would you like to ordermore? ";
		cin>>moreOrder;
		if(moreOrder != 'y' && moreOrder != 'Y')
		{
			break;
		}
	}
}

