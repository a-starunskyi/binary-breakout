// Problem 5: Write a program that declares an integer and a pointer to the integer. 
// Assign a value to the integer using the dereference operator.

#include <iostream>
using namespace std;

int main() {
	int intValue;
	int* intPtr = &intValue;

	*intPtr = 99;
	cout << "Value of intValue: " << intValue << endl;
	cout << "Value pointed to by intPtr: " << *intPtr << endl;

	return 0;
}