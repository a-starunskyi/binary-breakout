// Problem: Write a program that takes a number from the user and determines whether it's even or odd.

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Input the value for the number"
		cin >> num;
	if (num % 2 == 0) {
		cout << "The number is even."
	}
	else {
		cout << "The number is odd."
	}

	return 0;
}
