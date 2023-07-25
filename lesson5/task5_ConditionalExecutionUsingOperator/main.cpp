// Problem: Write a program that displays "Odd" for odd numbers and "Even" for even numbers using the ternary operator.

#include<iostream>
using namespace std;

int main() {
	int num;

	// TODO: Take input from the user
	cout << "Enter the number: " << endl;
	cin >> num;

	// TODO: Implement the ?: operator to determine and display if it's even or odd
	int answer = (num % 2 == 0 || num % 2 != 0) ? num % 2 == 0 : num % 2 != 0;
	cout << "1 represents even numbers, 0 represents odd numbers; the result is: " << answer << endl;

	return 0;
}
