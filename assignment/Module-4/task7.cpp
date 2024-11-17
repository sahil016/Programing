//Write a C++ program to create a class called Person that has private
//member variables for name, age and country. Implement member
//functions to set and get the values of these variables.

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    // Constructor to initialize member variables
    Person(const string& n, int a, const string& c) : name(n), age(a), country(c) {}

    // Setter for name
    void setName(const string& n) {
        name = n;
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Setter for age
    void setAge(int a) {
        age = a;
    }

    // Getter for age
    int getAge() const {
        return age;
    }

    // Setter for country
    void setCountry(const string& c) {
        country = c;
    }

    // Getter for country
    string getCountry() const {
        return country;
    }
};

int main() {
    // Create a Person object with initial values
    Person person("Alice", 30, "USA");

    // Display initial values
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Country: " << person.getCountry() << endl;

    // Modify values using setters
    person.setName("Bob");
    person.setAge(25);
    person.setCountry("Canada");

    // Display modified values
    cout << "Updated Name: " << person.getName() << endl;
    cout << "Updated Age: " << person.getAge() << endl;
    cout << "Updated Country: " << person.getCountry() << endl;

    return 0;
}

