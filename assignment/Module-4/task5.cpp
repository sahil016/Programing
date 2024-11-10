//4.Write a C++ program to implement a class called Circle that has private
//member variables for radius. Include member functions to calculate the
//circle's area and circumference.

#include <iostream>
#include <cmath> // For M_PI constant
using namespace std;

class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Setter for radius
    void setRadius(double r) {
        radius = r;
    }

    // Getter for radius
    double getRadius() const {
        return radius;
    }

    // Function to calculate the area of the circle
    double calculateArea() const {
        return M_PI * radius * radius;
    }

    // Function to calculate the circumference of the circle
    double calculateCircumference() const {
        return 2 * M_PI * radius;
    }
};

int main() {
    // Create a Circle object with radius 5.0
    Circle myCircle(5.0);

   	cout << "Radius: " << myCircle.getRadius() << endl;

    cout << "Area: " << myCircle.calculateArea() << endl;

    cout << "Circumference: " << myCircle.calculateCircumference() << std::endl;

    return 0;
}

