#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    // Constructor to initialize member variables
    Car(const string& c, const string& m, int y) : company(c), model(m), year(y) {}

    // Setter for company
    void setCompany(const string& c) {
        company = c;
    }

    // Getter for company
    string getCompany() const {
        return company;
    }

    // Setter for model
    void setModel(const string& m) {
        model = m;
    }

    // Getter for model
    string getModel() const {
        return model;
    }

    // Setter for year
    void setYear(int y) {
        year = y;
    }

    // Getter for year
    int getYear() const {
        return year;
    }
};

int main() {
    // Create Car objects with initial values
    Car phantom("Rolls-Royce", "Phantom", 2022);

    // Display initial details
    cout << "Initial details of Car 1:" << endl;
    cout << "Company: " << phantom.getCompany() << endl;
    cout << "Model: " << phantom.getModel() << endl;
    cout << "Year: " << phantom.getYear() << endl;

  
    // Modify values using setters
    phantom.setCompany("BMW");
    phantom.setModel("M4");
    phantom.setYear(2014);

    // Display modified details
    cout << "\nModified details of Car 2:" << endl;
    cout << "Company: " << phantom.getCompany() << endl;
    cout << "Model: " << phantom.getModel() << endl;
    cout << "Year: " << phantom.getYear() << endl;

    return 0;
}

