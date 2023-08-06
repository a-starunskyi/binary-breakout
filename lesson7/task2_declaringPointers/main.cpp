// Problem 2: Write a program that declares an integer pointer and a float pointer.
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