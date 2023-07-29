// Problem: Write a program that takes a number from the user and determines whether it's even or odd.

#include<iostream>


int main() {
	int num;

	// TODO: Take input from the user
	std::cout << "enter random number" << std::endl;
	std::cin >> num;

	if (num % 2 == 0) {
		std::cout << "number that you entered is even" << std::endl;
	} else {
		std::cout << "number that you entered is odd" << std::endl;
	}






	// TODO: Implement the if ... else logic to determine and display if it's even or odd

	return 0;
}
