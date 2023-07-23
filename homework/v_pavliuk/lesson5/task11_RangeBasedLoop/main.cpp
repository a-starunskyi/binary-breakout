// Problem: Write a program that goes through an array of fixed size and displays all its elements.

#include<iostream>

using namespace std;

int main() {
	 // Fixed size array

	// TODO: Populate the array

	// TODO: Implement a loop to display all elements of the array

	int arr[5] = {-5, 60, 38, -450, 4};

	cout << "Array elements: ";

	for (int element : arr)
	{
		cout << element << " ";
	}


	return 0;
}
