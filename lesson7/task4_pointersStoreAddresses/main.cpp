// Problem 4: Write a program that declares an integer, a float and pointers to them. 
// Assign the addresses of the variables to the respective pointers.

#include<iostream>;

int main()
{
	int num = 10;
	float floNum = 5.55;

	int* pointerToNum = &num;
	float* pointerToFloat = &floNum;

	std::cout << "Pointer to int : " << *pointerToNum << std::endl;
	std::cout << "Pointer to float : " << *pointerToFloat << std::endl;
}