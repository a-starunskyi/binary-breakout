// Problem 21: Write a program that declares a constant reference and attempts to change the value it refers to.
#include<iostream>

int main() {
	int num1 = 4;
	const int& ref = num1; //declaring a const ref to a num

	//output
	std::cout << "original value of num: " << num1 << std::endl;
	std::cout << "value reffered to num by ref: " << ref << std::endl;

	//attempt to change const ref will result 
	//in a compilation error
	//commented line of code that outputs compilation error( bellow )
	//ref = 8;

	//output
	std::cout << "modified value of num: " << num1 << std::endl;
	std::cout << "value reffered to ref after modification: " << ref << std::endl;

	return 0;
}