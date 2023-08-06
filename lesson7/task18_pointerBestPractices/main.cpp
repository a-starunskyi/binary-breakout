// Problem 18: Write a program that demonstrates best practices for using pointers. Explain these practices in comments.

#include <iostream>
using namespace std;

int main() {
	int* intPtr = nullptr; // Initialize pointers to nulltpr to avoid using uninitalized memory
	
	intPtr = new int; // Allocate dynamic memory 

	if (intPtr != nullptr) {
		// Dereference pointers safely
		*intPtr = 42; // Assign a value to allocated memory

		delete intPtr; // Deallocate memory to prevent memory leaks
		intPtr = nullptr; // Reset the pointer to nullptr after deleting to prevent dangling pointers

		cout << "Memory allocation, assignment and deallocation successful" << endl;
	}
	else {
		cout << "Memory allocation failed." << endl;
	}

	return 0;
}