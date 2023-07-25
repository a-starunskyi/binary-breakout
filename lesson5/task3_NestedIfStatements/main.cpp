// Problem: Write a program that checks if the number entered by the user is positive, negative or zero.

#include<iostream>
using namespace std;

int main() {
	int num;

	// TODO: Take input from the user
	cout << "Enter the number: " << endl;
	cin >> num;

	// TODO: Implement the nested if statements to determine and display if the number is positive, negative, or zero.
	if (num)
	{
		if (num > 0)
		{
			cout << "Number is positive" << endl;

		}

		if (num < 0)
		{
			cout << "Number is negative" << endl;
		}

		

	}
	else
	{
		cout << "Number equals zero" << endl;
	}
	return 0;
}
