// Problem: Write a program that checks if the number entered by the user is positive, negative or zero.

#include<iostream>


int main() {
	int number;
	std::cout << "enter aany number: " << std::endl;
	std::cin >> number;

	if (number > 0) {
		std::cout << "Number that you entered is positive: " << std::endl;
	}
	else if (number < 0) {
		std::cout << "number that you entered is negative: " << std::endl;

	}
	else {
		std::cout << "Number that you entered is zero " << std::endl;
	}





	// TODO: Take input from the user

	// TODO: Implement the nested if statements to determine and display if the number is positive, negative, or zero.

	return 0;
}
