// Problem: Write a program that takes a number from the user and determines whether it's even or odd.

#include<iostream>
using namespace std;

int main() {
	
	// TODO: Take input from the user

	// TODO: Implement the if ... else logic to determine and display if it's even or odd
	
	int num = 0;
	cout << "Enter your integer: ";
	cin >> num;
	
	if (num % 2 == 0)
	{
		cout << "The output number is even";
	}
	else
	{
		cout << "The output number is not even";
	}

	return 0;
}
