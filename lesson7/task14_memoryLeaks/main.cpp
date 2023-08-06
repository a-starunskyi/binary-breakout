// Problem 14: Write a program that intentionally causes a memory leak and explain what is happening in comments.

#include <iostream>
using namespace std;

int main() {
	while (true) {
		// Dynamically allocating memory
		int* ptr = new int;
		// Mistake is not deallocating memory before reassigning the pointer
		// Each loop, a new integer is allocated using new
		// However, the memory allocated each iteration is never dealt with
		// This will lead to a memory leak, when program continues to consume
		// memory, without releasing it
	}

	return 0;
}