// Problem 10: Write a program that declares a constant integer and a pointer to it. 
// Try to change the value of the integer through the pointer.

#include <iostream>
using namespace std;

int main() {
	const int constantValue = 10;
	const int* ptr = &constantValue;

	cout << "Value before changing: " << *ptr << endl;

	// *ptr = 20; //uncommenting this line will result in a compilation error

	cout << "Value after trying to change: " << *ptr << endl;

	return 0;
}