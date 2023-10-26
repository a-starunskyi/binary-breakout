// Problem 1: Write a program that declares a pointer and explains what it does in comments.
#include<iostream>

int main() {
	int number = 4;
	int* numberLocation = &number;
	// Print the value of number and the memory location address it occupies
	std::cout << "the number is: " << number << " Number location " << numberLocation  <<std::endl;
	return 0;
}







