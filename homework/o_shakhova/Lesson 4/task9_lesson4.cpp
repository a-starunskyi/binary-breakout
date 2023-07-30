// task9_lesson4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Develop a C++ program that uses the sizeof operator to determine the memory occupied by different data types.

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	// Displaying the message to demonstrate the usage of sizeof to determine memory occupied by different data types.
	cout << "Use sizeof to determine memory by arrays" << endl;
	int myNumbers[100] = { 0 };

	cout << "Bytes used by an int: " << sizeof(int) << endl;
	cout << "Bytes used by myNumbers: " << sizeof(myNumbers) << endl;
	cout << "Bytes used by an element: " << sizeof(myNumbers[0]) << endl;

	cout << "Bytes used by an char: " << sizeof(char) << endl;
	cout << "Bytes used by an float: " << sizeof(float) << endl;
	cout << "Bytes used by an double: " << sizeof(double) << endl;
	cout << "Bytes used by an bool: " << sizeof(bool) << endl;
	cout << "Bytes used by an long: " << sizeof(long) << endl;
	cout << "Bytes used by an long long: " << sizeof(long long) << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
