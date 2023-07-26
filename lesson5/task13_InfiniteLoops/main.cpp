// Problem: Write a program that keeps taking numbers from the user until a negative number is entered.

#include<iostream>
using namespace std;

int main() {
	while (true) {
		int number;
		cout << "Input a number (enter a negative number to stop): ";
		cin>>number
			if (number < 0) {
				break;
			}
		cout << "The number you input: " << number;
	}

	return 0;
}
