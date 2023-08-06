// Problem 12: Write a program that demonstrates the similarities between arrays and pointers.

#include <iostream>
using namespace std;

int main() {
	int arr[5] = { 10,20,30,40,50 };
	// Pointer to the first element of the array
	int* ptr = arr;
	
	cout << "Array elements using array notation: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "Array elements using pointer notation: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << *(ptr + i) << " ";
	}
	cout << endl;

	return 0;
}