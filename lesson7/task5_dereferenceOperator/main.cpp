// Problem 5: Write a program that declares an integer and a pointer to the integer. 
// Assign a value to the integer using the dereference operator.

#include<iostream>

int main() {
	int intNum = 4;
	int* intNumPtr = &intNum;

	*intNumPtr = 8;

	std::cout << "the value of integer is: " << intNum << std::endl;







	return 0;
}