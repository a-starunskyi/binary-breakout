// Problem 19: Write a program that declares a reference and explains what it does in comments.
#include<iostream>

int main() {
	//declere a number
	int originNum = 4;
	//declare a reference 
	int& referenceNum = originNum;
	//just output
	std::cout << "original value: " << originNum << std::endl;
	std::cout << "reference value: " << referenceNum << std::endl;

	//editing reference value also editing the original value!
	referenceNum = 8;
	//output
	std::cout << "original value after editing: " << originNum << std::endl;
	std::cout << "reference value after editing: " << referenceNum << std::endl;

	return 0;
}