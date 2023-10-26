// Problem 4: Write a program that declares an integer, a float and pointers to them. 
// Assign the addresses of the variables to the respective pointers.

#include<iostream>

int main() {
	int intNum = 4;
	float floatNum = 3.14;

	float* floatNumPtr = &floatNum;
	int* intNumPtr = &intNum;
	// memory adress changes everytime we compile the program due to memory allocation by the operating system
	std::cout << "integer value: " << intNum << "\n" << "Float value: " << floatNum << std::endl;
	std::cout << "adress to integer: " << intNumPtr << "\n" << "adress to float: " << floatNumPtr << std::endl;

	return 0;
}