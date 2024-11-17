 //Define a class to represent a bank account. Include the following members:   
//1. Data Member:   -Name of the depositor   -Account Number   -Type of Account
//   -Balance amount in the account   
  

//2. Member Functions  
// -To assign values  
 //-To deposited an amount   -To withdraw an amount after checking balance   
// -To display name and balance 

#include<iostream>
using namespace std;

class BankAccount {

    // Data members
    string depositorName;   // Name of the depositor
    int accountNumber;      // Account number
    string accountType;     // Type of account 
    float balance;          // Balance in the account

    public:
    // Member Function to assign values
    assignValues(string name, int accNo, string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNo;
        accountType = accType;
        balance = initialBalance;
    }

    // Member Function to deposit an amount
    void deposit(double amount) {
        amount = balance + amount;
        cout << "Deposited: " << amount << endl;
    }

    // Member Function to withdraw 
    withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            amount= balance-amount;
            cout << "Withdrawn: $" << amount << endl;
        }
    }

    // Member Function to display 
    displayInfo() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Current Balance:" << balance << endl;
    }
};

main() {
    // Creating an object of BankAccount
    BankAccount myAcc;
    myAcc.assignValues("Disha more", 123456, "Savings", 1000.00);

    myAcc.displayInfo();
    myAcc.deposit(500.00);
    myAcc.withdraw(200.00);
    myAcc.displayInfo();

    
}
