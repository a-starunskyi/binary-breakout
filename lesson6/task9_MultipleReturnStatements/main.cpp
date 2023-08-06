// Problem: Write a function that checks if a number is prime. 
// This function should return true if the number is prime and false if it's not. Use multiple return statements in your function.

#include<iostream>
bool isPrime(int num) {
	if (num <= 1) {
		return false;
	}
	else if (num <= 3) {
		return true;
	}
	else if (num % 2 == 0 || num % 3 == 0) {
		return false;
	}
	else {
		for (int i = 5; i * i <= num; i += 6) {
			if (num % i == 0 || num % (i + 2) == 0) { //this checks if num is divisible by i and checks if num is divisible by the next integer after i
				return false;
			}
		}
		return true;
	}
}
// TODO: Declare and define the function that checks if a number is prime

int main() {
	int number;
	std::cout << "enter a number: ";
	std::cin >> number;
	if (isPrime(number)) {
		std::cout << "the number: " << number << " is prime" << std::endl;
	}
	else {
		std::cout << "the number: " << number << " is`t prime" << std::endl;
	}
	// TODO: Call the function
	return 0;
}
