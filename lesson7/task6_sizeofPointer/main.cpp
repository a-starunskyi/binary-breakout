// Problem 6: Write a program that declares a pointer and prints its size using the sizeof() function.
#include<iostream>
int main() {

	int* intPtr = nullptr;

	std::cout << "the size of pointer is: " << sizeof(intPtr) << std::endl;

	return 0;
}