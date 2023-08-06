// Problem 3: Write a program that declares an integer and a pointer to that integer. 
// Use the reference operator to assign the address of the integer to the pointer.

#include <iostream>
using namespace std;

int main() {
	int myInt = 42;
	int* intPtr = &myInt;

	cout << "Value of myInt: " << myInt << endl;
	cout << "Address of myInt: " << &myInt << endl;
	cout << "Value pointed to by intPtr: " << *intPtr << endl;
	cout << "Address stored in intPtr: " << intPtr << endl;

	return 0;
}