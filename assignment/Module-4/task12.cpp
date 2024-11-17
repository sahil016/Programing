//Write a C++ program to create a class called Triangle that has private
//member variables for the lengths of its three sides. Implement member
//functions to determine if the triangle is equilateral, isosceles, or scalene.


#include <iostream>
using namespace std;

class Triangle {
	private:
    double side1, side2, side3;

	public:
    // Constructor to initialize sides
    Triangle(double a = 0, double b = 0, double c = 0) : side1(a), side2(b), side3(c) {}

    // Function to set the sides of the triangle
    void setSides(double a, double b, double c) 
	{
        side1 = a;
        side2 = b;
        side3 = c;
    }

    // Function to check if the triangle is equilateral
    bool isEquilateral() 
	{
        return (side1 == side2) && (side2 == side3);
    }

    // Function to check if the triangle is isosceles
    bool isIsosceles() 
	{
        return (side1 == side2) || (side2 == side3) || (side1 == side3);
    }

    // Function to check if the triangle is scalene
    bool isScalene() const {
        return (side1 != side2) && (side2 != side3) && (side1 != side3);
    }
};

int main() {
    // Creating a Triangle object
    Triangle t1;

    // Setting sides of the triangle
    t1.setSides(3, 4, 5);

    // Checking and displaying the type of the triangle
    if (t1.isEquilateral()) 
	{
    cout << "The triangle is Equilateral." << endl;
    }
	else if (t1.isIsosceles()) 
	{
		cout << "The triangle is Isosceles." << endl;
    } 
	else if (t1.isScalene()) 
	{
        cout << "The triangle is Scalene." << endl;
    }
	else 
	{
        cout << "The triangle is invalid." << endl;
    }
    
}

