// Problem: Write a program that calculates the sum of numbers from 1 to n.

#include<iostream>
using namespace std;

int main() {
	int n;
	int sum = 0;
	std::cout << "enter a positive number: ";
	std::cin >> n;
	for (int num = 1; num <= n; num++) {
		sum += num;
	}
	std::cout << "sus from 1 to " << n << " is: " << sum << std::endl;


	// TODO: Take input from the user

	// TODO: Implement a for loop to calculate and display the sum of numbers from 1 to n

	return 0;
}
