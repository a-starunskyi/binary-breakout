// Problem 13: Write a program that has a common pointer mistake and explain the mistake in comments.

#include <iostream>
using namespace std;

int main() {
	int* ptr;

	// Accessing memory through an unitialized pointer 
	// leads to undefined behavior
	// In this case, we are trying to assign a value to the memory location
	// pointed by 'ptr', but 'ptr' is unitialized, so we don't know
	// where it's pointing

	// This line will result in undefined behavior
	*ptr = 42;

	cout << "Value at the pointer location: " << *ptr << endl;

	return 0;
}