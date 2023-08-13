// Problem 9: Write a program that declares an integer array and a pointer to the first element of the array. 
// Increment and decrement the pointer and print the values it points to.

#include <iostream>
using namespace std;

int main() {
	int arr[] = { 10, 20, 30, 40, 50 };
	int* ptr = arr;

	cout << "Values pointed by the pointer: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << *ptr << " ";
		ptr++;
	}
	cout << endl;

	ptr = arr+4;
	
	cout << "Values pointed by the pointer after resetting: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << *ptr << " ";
		ptr--;
	}

	cout << endl;

	return 0;
}