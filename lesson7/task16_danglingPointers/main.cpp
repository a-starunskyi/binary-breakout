// Problem 16: Write a program that declares a pointer, allocates memory to it, and then deletes it. 
// Attempt to access the data at this location and explain what happens in comments.

#include <iostream>
using namespace std;

int main() {
	// Allocating memory for an integer
	int* ptr = new int;
	*ptr = 42;
	// Deallocating
	delete ptr;

	// Trying to access the data at the deleted memory location
	int value = *ptr; // This will lead to undefined behavior

	// As we attempt to access the data at the memory location point
	// and after memory has been dealt with, it is important 
	// to clear dangling pointers, by assigning it nullptr, for example
	// ptr = nullptr
	// After this, the dangling point is cleared and safe to use
	return 0;
}