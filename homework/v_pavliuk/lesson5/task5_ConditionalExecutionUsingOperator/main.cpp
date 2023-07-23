// Problem: Write a program that displays "Odd" for odd numbers and "Even" for even numbers using the ternary operator.

#include<iostream>
using namespace std;

int main() {

	// TODO: Take input from the user

	// TODO: Implement the ?: operator to determine and display if it's even or odd


	int num = 0;
	cout << "Enter your number: ";
	cin >> num;
	string result = (num % 2 == 0) ? "Even" : "Odd";

	cout << "The number is " << result << endl;

	return 0;
}
