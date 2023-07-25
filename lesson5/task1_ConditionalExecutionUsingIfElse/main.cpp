// Problem: Write a program that takes two numbers from the user and displays which one is greater.

#include<iostream>
using namespace std;

int main() {
	int num1, num2 = 0;

	// TODO: Take input from the user
	cout << "Enter two  numbers: " << endl;
	cin >> num1;
	cin >> num2; 

	// TODO: Implement the if ... else logic to determine and display the greater number
	
	if (num1 > num2)
	{
		cout << "The first number is bigger" << endl;
	}
	else
	{
		cout << "The second number is bigger" << endl;
	}

	return 0;
}
