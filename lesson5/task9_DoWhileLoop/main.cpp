// Problem: Write a program that asks the user to enter numbers until a zero is entered.

#include<iostream>
using namespace std;

int main() {
	int num = 1;
	do {
		cout << "Input a number (0 to stop): ";
		cin >> num;

		if (number != 0) {
			cout << "Your number: " << num << endl;
		}
	} while (number != 0);

	return 0;
}
