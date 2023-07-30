// Problem: Write a program that takes two numbers from the user and displays which one is greater.

#include<iostream>
using namespace std;
// TODO: Take input from the user
int main() {
	int num1 = 0, num2 = 0;
	cout << "Enter 2 numbers: " << endl;
	cin >> num1;
	cin >> num2;

	// TODO: Implement the if ... else logic to determine and display the greater number
	if (num1 > num2)
	{
		cout << "First number is greater then second number" << endl; 
	}
	else
	{
		cout  << "Second number is greater then first number" << endl;
	}

	return 0;
}
