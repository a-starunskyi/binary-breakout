// Swapping_Without_If_Statements.cpp: This file contains the 'main' function. Program execution begins and ends there.
/*Write a program that declares an integer array of size 2 with the values 5 and 10.
Swap the values of the two elements using a temporary variable and print the result.*/

#include <iostream>
using namespace std;

int main()
{
	int myArray[2] = { 5, 10 };

	// Swap the values using a temporary variable
	int temp = myArray[0];
	myArray[0] = myArray[1];
	myArray[1] = temp;

	//Print the result after swapping
	cout << "After swapping: " << myArray[0] << " " << myArray[1] << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu