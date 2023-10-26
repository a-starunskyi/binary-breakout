// Problem 2: Write a program that declares an integer pointer and a float pointer.
#include<iostream>

int main() {
	int intNum = 10;
	float floatNum = 3.14;

	int* intPtr = &intNum;
	float* floatPtr = &floatNum;

	std::cout << "integer value: " << *intPtr << ", adress: " << &intPtr << '\n' << "Float value: " << *floatPtr << ", adress: " << &floatPtr;







	return 0;
}