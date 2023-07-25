// Problem: Write a program that takes a number from the user and determines whether it's even or odd.

#include<iostream>
using namespace std;

int main() {
	int num = 0;

	// TODO: Take input from the user
	cout << "Enter a number: " << endl;
	cin >> num;

	// TODO: Implement the if ... else logic to determine and display if it's even or odd
	if (num % 2 == 0)
	{
		cout << "The number is even" << endl;
	}
	else
	{
		cout << "The number is odd" << endl;
	}
	return 0;
}
