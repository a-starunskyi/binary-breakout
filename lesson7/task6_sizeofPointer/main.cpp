// Problem 6: Write a program that declares a pointer and prints its size using the sizeof() function.

#include <iostream>
using namespace std;

int main() {
	int* ptr = nullptr;

	cout << "Size of pointer: " << sizeof(ptr) << " bytes" << endl;

	return 0;
}