// Problem 21: Write a program that declares a constant reference and attempts to change the value it refers to.

#include <iostream>

int main()
{
	int original = 30;
	const int& constRef = original;
	
	std::cout<<constRef<<std::endl;

	//constRef = 45; Don't work

	std::cout << constRef << std::endl;
}