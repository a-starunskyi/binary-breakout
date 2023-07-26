// Problem: Write a program that keeps taking numbers from the user until a negative number is entered, but terminates after 100 inputs.

#include<iostream>
using namespace std;

int main() {
	int count = 0;
	while (true) {
		int number;

		cout << "Input a number (enter a negative number to stop): ";
		cin >> number;

		if (number < 0 || count == 100) {
			break;
		}

		cout << "Your input: " << number;

		count++;

	}

	return 0;
}
