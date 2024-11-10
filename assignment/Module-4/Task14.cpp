//Assume that the test results of a batch of students are stored in three different 
//classes. Class Students are storing the roll number. Class Test stores the marks 
//obtained in two subjects and class result contains the total marks obtained in 
//the test. The class result can inherit the details of the marks obtained in the 
//test and roll number of students. (Multilevel Inheritance)  
#include <iostream>
using namespace std;
class Student {
	public:
    	int rollNum;

    // Member function 
    RollNum() {
        cout << "Enter roll number: ";
        cin >> rollNum;
    }

    // Member function
    displayRN() {
        cout << "Roll Number: "<<rollNum<<endl;
    }
};

//(inherits from Student)
class Test:public Student {
	public:
    	int maths, eng;

    // Member function 
   	Marks() {
        cout << "Enter marks for maths : ";
        cin >> maths;
        cout << "Enter marks for eng : ";
        cin >> eng;
    }
    displayM() {
        cout << "Marks in Maths: "<<maths<<endl;
        cout << "Marks in English: "<<eng<<endl;
    }
};

//(inherits from Test)
class Result:public Test {
	public:
    int totalMarks;

    // Member function 
    Total() {
        totalMarks = maths + eng;
    }
    displayRes() {
        displayRN();  // Display roll number from Student class
        displayM();       // Display marks from Test class
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    // Create an object of the derived class Result
    Result s;
	// Input data
    s.RollNum();  
    s.Marks();      
    s.Total();
    s.displayRes();
}

