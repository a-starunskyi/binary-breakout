// Problem: Write a program that checks if the number entered by the user is positive, negative or zero.

#include<iostream>
using namespace std;

int main() {

	int num;
	cin >> num;

	if (num > 0)
	{
		cout << " A number greater than zero " << endl;
	}
	else if (num < 0)
	{
		cout << " Number less than zero " << endl;
	}
	else
	{
		cout << " The number is zero " << endl;
	}
	// TODO: Take input from the user

	// TODO: Implement the nested if statements to determine and display if the number is positive, negative, or zero.

	return 0;
}
