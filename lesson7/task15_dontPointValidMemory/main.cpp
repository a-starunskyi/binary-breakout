// Problem 15: Write a program that declares a pointer and doesn't assign a valid memory location to it. 
// Attempt to access the data at this location and explain what happens in comments.

#include <iostream>
using namespace std;

int main() {
	// Declaring a pointer without initializing it
	int* ptr; 

	// Attempting to access the data pointed to
	// This will likely result in a runtime error
	int value = *ptr;
	
	// This integer pointer is declared without being initialized, and 
	// when we attempt to access the data pointed to by 'ptr'
	// we are trying to read from an unitialized memory location
	// which leads to an undefined behaviour, which can 
	// result in a runtime error or a segmentation fault
	// initialize your pointers!
	return 0;
}