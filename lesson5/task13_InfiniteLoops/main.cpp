// Problem: Write a program that keeps taking numbers from the user until a negative number is entered.

#include<iostream>

int main() {
	std::cout << "enter negetive number if you want program to stop!!!" << std::endl;
	float num1 = 0;
	do
	{	
		std::cout << "enter a integer: " << std::endl;
		std::cin >> num1;
		std::cout << " You entered: " << num1 << std::endl;

	} while (num1 >= 0);
	// TODO: Implement an infinite loop that keeps taking numbers from the user until a negative number is entered
	std::cout << "Bye " << std::endl;

	return 0;
}
