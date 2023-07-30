// Problem: Write a program that checks if the number entered by the user is positive, negative or zero.

#include<iostream>
using namespace std;

int main() {
	int num1 = 0;

	// TODO: Take input from the user
	cout << "Enter a number: " << endl;
	cin >> num1;
	// TODO: Implement the nested if statements to determine and display if the number is positive, negative, or zero.
	if (num1)
	{
		if (num1 < 0)
		{
			cout << "The number is negative" << endl;
		}
		
		if (num1 > 0)
		{
			cout << "The number is positive" << endl;
		}

	}

	else
		cout << "Number is equal 0" << endl;

	return 0;
}
