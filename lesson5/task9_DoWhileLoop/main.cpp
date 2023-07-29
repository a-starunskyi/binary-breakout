// Problem: Write a program that asks the user to enter numbers until a zero is entered.

#include<iostream>


int main() {
	int number;
	std::cout << "enter number: (0 to stop)" << std::endl;
	std::cin >> number;
	if (number == 0) {
		std::cout << "you entered 0 bro" << std::endl;
	}
	while (number != 0) {
		std::cout << "you enter: " << number << std::endl;
		std::cout << "enter number: (0 to stop)" << std::endl;
		std::cin >> number;
	}
	std::cout << "you entered 0 bro" << std::endl;
	// TODO: Implement a do...while loop to take numbers from user until zero is entered

	return 0;
}
