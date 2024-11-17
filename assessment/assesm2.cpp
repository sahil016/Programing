#include <iostream>
using namespace std;

class CalAmount {
public:
    float prices[4] = {180, 100, 120, 150};

    float calculateAmount(int choice, int quantity) {
        if (choice < 1 || choice > 4 || quantity <= 0) {
            cout << "Invalid choice or quantity!" << endl;
            return 0;
        }
        return prices[choice - 1] * quantity;
    }
};

class Display {
public:
    Display() {
        cout << "-----------------Menu-----------------" << endl;
        cout << "1. Pizza" << endl;
        cout << "2. Burgers" << endl;
        cout << "3. Sandwich" << endl;
        cout << "4. Biriyani" << endl;
    }
};

class Derived {
private:
    float totalBill = 0; // Encapsulated totalBill

public:
    void order(CalAmount &calc) {
        int choice, quantity;
        cout << "What would you like to order? (1-4): ";
        cin >> choice;

        if (choice < 1 || choice > 4) {
            cout << "Invalid choice!" << endl;
            return;
        }

        if (choice == 3) {
            sandwichOrder();
        } else {
            cout << "Enter quantity: ";
            cin >> quantity;
            float amount = calc.calculateAmount(choice, quantity);
            if (amount > 0) {
                totalBill += amount; // Update total bill
                cout << "Total amount for your order: " << amount << endl;
                cout << "Your total bill is: " << totalBill << endl;
            }
        }
    }

    void sandwichOrder() {
        int choice2, quantity;
        float sandwichPrices[3] = {160, 100, 100};
        cout << "---- Sandwich Menu ----" << endl;
        cout << "1. Club Sandwich Rs.160" << endl;
        cout << "2. Veg. Crispy Sandwich Rs.100" << endl;
        cout << "3. Extrem Veg Sandwich Rs.100" << endl;
        cout << "Please enter which sandwich you would like to have (1-3): ";
        cin >> choice2;

        if (choice2 < 1 || choice2 > 3) {
            cout << "Invalid choice!" << endl;
            return;
        }

        cout << "You ordered " << (choice2 == 1 ? "Club Sandwich." : choice2 == 2 ? "Veg. Crispy Sandwich." : "Extrem Veg Sandwich.") << endl;

        cout << "Please Enter quantity: ";
        cin >> quantity;

        if (quantity <= 0) {
            cout << "Invalid quantity!" << endl;
            return;
        }

        float sandwichTotal = sandwichPrices[choice2 - 1] * quantity;
        totalBill += sandwichTotal;

        cout << "Your total bill is: " << totalBill << endl;
    }

    // Method to get the total bill
    float getTotalBill() const {
        return totalBill;
    }
};

int main() {
    char moreOrder;
    cout << "\t\t\t\t\t\t----Tops Tech. Fast Food----" << endl;
    Display dis;
    CalAmount calc;
    Derived derived;

    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello " << name << endl;

    do {
        derived.order(calc); // Order from main menu
        cout << "Would you like to order more? (y/n): ";
        cin >> moreOrder;
    } while (moreOrder == 'y' || moreOrder == 'Y');

    cout << "Thank you for your order! Your total bill is: " << derived.getTotalBill() << endl; // Display final bill
    return 0;
}
