// Write a program of to sort the array using templates.  
#include <iostream>
using namespace std;
template <typename T>
	Sort(T arr[],int n) {
		int i,j;
    	for (i=0; i<n-1; i++) {
        	for (j=0; j<n-i-1; j++) {
            	if (arr[j]>arr[j+1]) {
	                swap(arr[j],arr[j+1]);
	            }
        }
    }
}

template <typename T>
	print(T arr[],int n) {
		int i;
    	for (i=0; i<n; i++) {
	        cout<<arr[i]<<" ";
	    }
    	cout << endl;
}

main() {
    int intArr[] = {64, 34, 25, 12, 22, 11, 90};
    cout<<"Original array: ";
    print(intArr, n);
    Sort(intArr, n);
    cout<<"Sorted array: ";
    print(intArr, n);
}
