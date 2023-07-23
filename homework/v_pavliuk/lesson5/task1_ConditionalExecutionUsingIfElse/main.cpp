// Problem: Write a program that takes two numbers from the user and displays which one is greater.

#include<iostream>
using namespace std;

int main() {

	// TODO: Take input from the user

	// TODO: Implement the if ... else logic to determine and display the greater number

	int num1 = 0;
	int num2 = 0;
	cout << "Enter two integers: ";
	cin >> num1;
	cin >> num2;


	if (num1 > num2)
	{
		cout << "Number 1 is greater that number 2";
	}
	else if (num1 < num2)
	{
		cout << "Number 2 is greater that number 1";
	}
	else
	{
		cout << "Numbers are equal";
	}

	return 0;
}
