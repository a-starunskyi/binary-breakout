// Problem: Write a program that goes through an array of fixed size and displays all its elements.

#include<iostream>
using namespace std;

int main() {
	int arr = 5; // Fixed size array
	int myNums[5] = { 0 };

	// TODO: Populate the array
	cout << "Populate array of " << arr << " integer" << endl; 

	for (int counter = 0; counter < arr; ++counter)
	{
		cout << "Enter an integer for element: " << counter << endl;
		cin >> myNums[counter];
	}

	// TODO: Implement a loop to display all elements of the array
	cout << "Displaying contents of array: " << endl;
	for (int counter = 0; counter < arr; ++counter)
	{
		cout << "Element " << counter << " = " << myNums[counter] << endl;
	}
	return 0;
}
