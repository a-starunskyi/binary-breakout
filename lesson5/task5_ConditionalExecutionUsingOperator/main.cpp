// Problem: Write a program that displays "Odd" for odd numbers and "Even" for even numbers using the ternary operator.

#include<iostream>

int main() {
	int number;
	std::cout << "enter any number: " << std::endl;
	std::cin >> number;
	std::string findingIsEvenOrOdd = (number % 2 == 0)? "even": "odd";
	std::cout << number << " is " << findingIsEvenOrOdd << std::endl;

	// TODO: Take input from the user

	// TODO: Implement the ?: operator to determine and display if it's even or odd

	return 0;
}
//im already use it in task1 lesson5
