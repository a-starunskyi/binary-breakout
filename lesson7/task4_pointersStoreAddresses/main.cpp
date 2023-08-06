// Problem 4: Write a program that declares an integer, a float and pointers to them. 
// Assign the addresses of the variables to the respective pointers.

#include <iostream>
using namespace std;

int main() {
	int intValue = 42;
	float floatValue = 3.14;
	
	int* intPtr = &intValue;
	float* floatPtr = &floatValue;
	
	cout << "Value of intValue: " << intValue << endl;
	cout << "Value pointed to by intPtr: " << *intPtr << endl;

	cout << "Value of floatValue: " << floatValue << endl;
	cout << "Value pointed to by floatValue: " << *floatValue << endl;

	return 0;
}