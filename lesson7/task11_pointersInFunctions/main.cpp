// Problem 11: Write a function that takes a pointer to an integer as a parameter and doubles the value of the integer. 
// Call this function from your main function.
#include <iostream>

void doubleValue(int* pointer);

int main()
{
	int number = 4;

	int* pointeToNum = &number;

	std::cout << "Numder = " << *pointeToNum << std::endl;

	doubleValue(pointeToNum);

	std::cout << "Numder x2 = " << *pointeToNum << std::endl;

	return 0;
}

void doubleValue(int* pointer)
{
	*pointer = *pointer + *pointer;
}
