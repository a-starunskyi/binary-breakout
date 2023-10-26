// Problem 11: Write a function that takes a pointer to an integer as a parameter and doubles the value of the integer. 
// Call this function from your main function.

#include<iostream>

void value(int* intPtr) {
	*intPtr *= 4;
}

int main() {

	int num = 8;
	int* intPtr = &num;

	std::cout << "original value: " << *intPtr << '\n';

	value(intPtr); // multyply by 4

	std::cout << "Multiplied value: " << *intPtr;

	return 0;
}