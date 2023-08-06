// Problem 8: Write a program that dynamically allocates an integer array, assigns values to it and then deletes it.

#include <iostream>
using namespace std;

int main() {
	int size = 0;

	cout << "Enter the size of the array: ";
	cin >> size;

	int* dynamicArray = new int[size]{};

	cout << "Enter " << size << " values for the array: " << endl;
	for (int = 0; i < size; i++) {
		cin >> dynamicArray[i];
	}

	cout << "Array values: " << endl;
	for (int i = 0; i < size; i++) {
		cout << dynamicArray[i] << " ";
	}
	cout << endl;
	
	delete[] dynamicArray;

	return 0;
}