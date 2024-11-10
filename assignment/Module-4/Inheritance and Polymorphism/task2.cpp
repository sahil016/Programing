#include <iostream>
using namespace std;

class Matrix {
    int arr[5];  \

public:
    // Function to input elements into the matrix
    void input() 
	{
        cout << "Enter 5 elements of the matrix: ";
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
    }

    // Overloaded + operator to add two matrices
    Matrix operator+(const Matrix &m)
	{
        Matrix result;  // Object to store the result
        for (int i = 0; i < 5; i++) {
            result.arr[i] = arr[i] + m.arr[i];
        }
        return result;
    }

    // Function to display the matrix
    void display() 
	{
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Matrix m1, m2, m3;

    cout << "Enter elements for the first matrix: " << endl;
    m1.input();

    cout << "Enter elements for the second matrix: " << endl;
    m2.input();

    m3 = m1 + m2;  \

    cout << "Result: ";  
    m3.display();

}

