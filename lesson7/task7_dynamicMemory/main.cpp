// Problem 7: Write a program that dynamically allocates an integer and assigns a value to it.

#include <iostream>
using namespace std;

int main() {
	// Dynamically allocating an integer
	int* dynamicInt = new int;

	*dynamicInt = 42;

	cout << "Value of dynamically allocated integer is: " << *dynamicInt << endl;

	///Deallocating the integer
	delete dynamicInt;
	
	return 0;
}