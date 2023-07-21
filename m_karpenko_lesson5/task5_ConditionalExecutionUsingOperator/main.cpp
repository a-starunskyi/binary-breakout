// Problem: Write a program that displays "Odd" for odd numbers and "Even" for even numbers using the ternary operator.

#include<iostream>
using namespace std;

int main() {
	int num = 0;

	// TODO: Take input from the user
	cin >> num;

	string odd = (num % 2 == 0) ? "Even" : "Odd";
	cout << "This number is:  " << odd  << endl;

	// TODO: Implement the ?: operator to determine and display if it's even or odd

	return 0;
}
