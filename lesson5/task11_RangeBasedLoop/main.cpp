// Problem: Write a program that goes through an array of fixed size and displays all its elements.

#include<iostream>

int main() {
	const int justArray = 5; // Fixed size array

	int arrayElements[justArray] = { 1, 2, 3, 4, 5 };

	std::cout << "Array elements left to right or right to left: " << std::endl;
	for (int a = 0; a < justArray; a++) {
		std::cout << arrayElements[a] << std::endl;
	}
	// TODO: Populate the array

	// TODO: Implement a loop to display all elements of the array

	return 0;
}
// i fucked up there all like a list