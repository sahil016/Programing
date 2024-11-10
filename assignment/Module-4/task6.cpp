//Write a C++ program to create a class called Rectangle that has private
//member variables for length and width. Implement member functions to
//calculate the rectangle's area and perimeter.


#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Setter for length
    void setLength(double l) {
        length = l;
    }

    // Getter for length
    double getLength() const {
        return length;
    }

    // Setter for width
    void setWidth(double w) {
        width = w;
    }

    // Getter for width
    double getWidth() const {
        return width;
    }

    // Function to calculate the area of the rectangle
    double calculateArea() const {
        return length * width;
    }

    // Function to calculate the perimeter of the rectangle
    double calculatePerimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    // Rectangle object with length 4.0 and width 3.0
    Rectangle myRectangle(4.0, 3.0);

    // Display the length and width of the rectangle
    cout << "Length: " << myRectangle.getLength() << endl;
    cout << "Width: " << myRectangle.getWidth() << endl;

    // Display the area and perimeter of the rectangle
    cout << "Area: " << myRectangle.calculateArea() << endl;
    cout << "Perimeter: " << myRectangle.calculatePerimeter() << endl;

}

