// Problem: Create a function prototype for a function that takes two integers as parameters and returns their sum. 
// Then define and call this function in your main function.

#include<iostream>

int sum(int a, int b);
// TODO: Declare the function prototype
int num1, num2;
int main() {
	std::cout << "enter the first number: ";
	std::cin >> num1;
	std::cout << "enter the second number: " ;
	std::cin >> num2;
	int result = sum(num1, num2);
	std::cout << "the sum of" << num1 << " and " << num2 << " is: " << result;
	// TODO: Define and call the function
	return 0;
}
int sum(int a, int b) {
	return a + b;
}
