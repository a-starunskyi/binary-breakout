// Problem 12: Write a program that demonstrates the similarities between arrays and pointers.
#include <iostream>

int main()
{
	int arr[5] = { 2,3,4,5,6 };

	int number = 5;
	int* pointerToNum = &number;

	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i] << " ";//Indicates the address of an element in the array
	}
	std::cout << std::endl;

	std::cout << "Display the value stored by the pointer :" << *pointerToNum << std::endl;//Specifies the address of the item in memory PC
	return 0;
}

