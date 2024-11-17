#include <iostream>
using namespace std;

class BankAccount {
private:
    int accNum;
    float balance;

public:
    // Constructor to initialize account number and balance
    BankAccount(int number, float initialBalance) : accNum(number), balance(initialBalance) {}

    // Function to deposit money
    void deposit() 
	{
        float amount;
        cout << "Enter amount for deposit: " << endl;
        cin >> amount;
        
        if (amount > 0) 
		{
            balance += amount;
            cout << "Deposit successful. Your new balance is: " << balance << endl;
        } 
		else 
		{
            cout << "Deposit amount must be positive." << endl;
        }
    }

    // Function to withdraw money
    void withdraw() {
        float amount;
        cout << "Enter amount for withdrawal: " << endl;
        cin >> amount;
        
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. Your new balance is: " << balance << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance." << endl;
        } else {
            cout << "Withdrawal amount must be positive." << endl;
        }
    }

    // Getter for account number
    int getAccountNumber()  
	{
        return accNum;
    }

    // Getter for balance
    float getBalance()  
	{
        return balance;
    }
};

int main() {
    // Create a BankAccount object with initial values
    BankAccount acc(93849849029740, 5000);

    cout << "Account number: " << acc.getAccountNumber() << endl;
    cout << "Initial balance: " << acc.getBalance() << endl;

    // Perform deposit and withdrawal operations
    acc.deposit();
    acc.withdraw();
}

