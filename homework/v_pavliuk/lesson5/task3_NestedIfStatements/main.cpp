// Problem: Write a program that checks if the number entered by the user is positive, negative or zero.

#include<iostream>
using namespace std;

int main() {

	// TODO: Take input from the user

	// TODO: Implement the nested if statements to determine and display if the number is positive, negative, or zero


	int num = 0;
	cout << "Enter your integer: ";
	cin >> num;

	if (num > 0)
	{
		cout << "This number is positive";
	}
	else if (num < 0)
	{
		cout << "This number is negative";
	}
	else
	{
		cout << "This number is zero";
	}

	return 0;
}
