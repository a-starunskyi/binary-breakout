// Problem 10: Write a program that declares a constant integer and a pointer to it. 
// Try to change the value of the integer through the pointer.

#include<iostream>

int main() {
	const int num = 4;
	const int* intPtr = &num;

	std::cout << "original const int is: " << num << '\n';

	*intPtr = 8;


	std::cout << "changed const int is: " << *intPtr;

	std::cout << num << std::endl;

	return 0;
}

//so you cant modify it