// Problem: Write a recursive function that calculates the factorial of a number.

#include<iostream>
int factorial(int n) {
	if (n == 0 || n == 1) { // factorial of 0 and 1 is 1
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

// TODO: Declare and define the recursive function that calculates factorial of a number

int main() {
	int num;
	std::cout << "enter a number: ";
	std::cin >> num;
	if (num < 0) {
		std::cout << "factorial cant be defined by negative number! " << std::endl;
	}
	else {
		int result = factorial(num);
		std::cout << "factorial of: " << num << " is " << result << std::endl;
	}
	// TODO: Call the recursive function
	return 0;
}
