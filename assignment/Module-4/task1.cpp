//Write a program to calculate the area of circle, rectangle and triangle using Function Overloading   
// Rectangle: Area * breadth   
// Triangle: ½ *Area* breadth  
// Circle: Pi * Area *Area
#include <iostream>
using namespace std;
//area of a rectangle
	area(float len, float bdth) {	//Overloading
    	return len * bdth;
}

//area of a triangle
	area(float b, float h, char tri) {	//Overloading
    	return 0.5 * b* h;
}

//area of a circle
	area(float rad) {	//Overloading
    	float PI = 3.14159;  
    	return PI * rad * rad;
}

main() 
{
    float len, bdth, b, h, rad;
	// Area of Rectangle
    cout << "Enter length and breadth of the rectangle: "<<endl;
    cin >>len>>bdth;
    cout<<"Area of Rectangle: "<<area(len,bdth);

    // Area of Triangle
    cout << "Enter base and height of the triangle: "<<endl;
    cin >> b>> h;
    cout << "Area of Triangle: " << area(b, h, 'T')<<endl;

    // Area of Circle
    cout<<"Enter radius of the circle: ";
    cin>>rad;
    cout<<"Area of Circle: "<<area(rad)<<endl;

}

