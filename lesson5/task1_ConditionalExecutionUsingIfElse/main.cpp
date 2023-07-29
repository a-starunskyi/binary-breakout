// Problem: Write a program that takes two numbers from the user and displays which one is greater.

#include<iostream>


int main() {
	int num1, num2;

	// TODO: Take input from the user
	std::cout << "Enter two numbers: " << std::endl;
	std::cin >> num1;
	std::cin >> num2;
	// TODO: Implement the if ... else logic to determine and display the greater number
	//im already do that in task5 lesson4 so i will write something else
	int greaterNum1 = (num1 > num2) ? num1 : num2;
	std::cout << "the greater number between " << num1 << " and " << num2 << " is: " << greaterNum1 << std::endl;

	return 0;
}
