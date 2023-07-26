// Problem: Write a program that calculates the factorial of a number using a while loop.

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Input a non-negative integer: ";
	cin >> num;
	if (num < 0) {
		cout << "You have input a negative number." << endl;
		return 1;
	}
	int factorial = 1;
	while (num > 0) {
		factorial *= num;
		num--;
	}
	cout << "Factorial of your number is: " << factorial;
	return 0;
}
