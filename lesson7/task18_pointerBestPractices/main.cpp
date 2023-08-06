// Problem 18: Write a program that demonstrates best practices for using pointers. Explain these practices in comments.

#include <iostream>

int main()
{
	int* pointer = nullptr;
	pointer = new int (12);

	std::cout << *pointer << std::endl;

	delete pointer;

	return 0;
}