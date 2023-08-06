// Problem: Write a program that calculates the factorial of a number using a while loop.

#include<iostream>


int main() {
	int num = 0;
	std::cout << "enter a num: ";
	std::cin >> num;

	int factorial = 1;
	int i = 1;


	while (i <= num) {
		factorial *= i;
		i++;
	}

	std::cout << "factorial of: " << num << " is " << factorial << std::endl;







	// TODO: Take input from the user
	// TODO: Implement a while loop to calculate and display the factorial of the number

	return 0;
}
