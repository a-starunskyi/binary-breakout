// Problem 17: Write a program that attempts to allocate a large amount of memory and checks whether the allocation was successful.

#include <iostream>
using namespace std;

int main() {
	const size_t largeSize = 1000000000; // 1 GB

	int* ptr = nullptr;

	try {
		ptr = new int[largeSize];
		cout << "Memory allocation successful!" << endl;
		// Do something if needed
		delete[] ptr;
		ptr = nullptr;
	}
	// Bad allocation exception
	catch (bad_alloc& ex) {
		cout << "Memory allocation failed: " << ex.what() << endl;
	}
	return 0;
}