// Problem: Write a program that displays "Odd" for odd numbers and "Even" for even numbers using the ternary operator.

#include<iostream>
using namespace std;

int main() {
	int num = 0;

	// TODO: Take input from the user
	cout << "Enter a number: " << endl;
	cin >> num;
	// TODO: Implement the ?: operator to determine and display if it's even or odd
	int typeNum = (num % 2 == 0 || num % 2 != 0) ? num % 2 == 0 : num % 2 != 0;
	cout << "If number is odd program gives you 0, if else 1: " << typeNum << endl;

	return 0;
}
