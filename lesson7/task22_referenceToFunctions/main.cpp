// Problem 22: Write a function that takes an integer reference as a parameter and doubles its value. 
// Call this function from your main function.
#include<iostream>

void doubleInt(int& num) {
	num *= 2;
}
int main() {
	int number = 8;

	std::cout << "original number: " << number << std::endl;

	doubleInt(number);
	
	std::cout << "doubled number: " << number << std::endl;
	return 0;
}