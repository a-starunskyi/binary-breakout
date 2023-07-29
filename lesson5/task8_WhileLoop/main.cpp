// Problem: Write a program that calculates the factorial of a number using a while loop.

#include<iostream>


int main() {
	int number1;
	int number2 = 1;
	std::cout << "enter a not negative number: " << std::endl;
	std::cin >> number1;
	while (number2 <= number1) {
		number2++;
	}

	std::cout << "factorial of " << number1 << " is: " << number2 << std::endl;
	// TODO: Take input from the user

	// TODO: Implement a while loop to calculate and display the factorial of the number

	return 0;
}
// shoulder shrugs