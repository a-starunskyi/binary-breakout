// Problem: Write a program that takes a number from the user and determines whether it's even or odd.

#include<iostream>
using namespace std;

int main() {
	int num1 = 0;

	// TODO: Take input from the user
	cout << "Enter a number: " << endl;
	cin >> num1;

	// TODO: Implement the if ... else logic to determine and display if it's even or odd
	if (num1 % 2 == 0)
	{
		cout << "A number is even" << endl;
	}
	else
	{
		cout << "A number is odd" << endl;
	}

	return 0;
}
