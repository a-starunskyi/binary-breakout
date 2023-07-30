// task1_lesson4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a C++ program that uses all of the basic arithmetic operators (+, -, *, /, %) in different expressions. Use at least three variables, and make sure you handle division by zero.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fmod;

int main()
{
	cout << "Enter two integers: " << endl;
	float num1 = 0.0f, num2 = 0.0f; // Using float for fractional numbers
	cin >> num1; // User add his numbers
	cin >> num2;

	cout << num1 << "+" << num2 << "=" <<  num1 + num2 << endl;
	cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
	cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;

	if (num2 != 0.0f) // num2 not equel to 0
	{
		cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
		cout << num1 << "%" << num2 << "=" << fmod (num1,num2) << endl; // Perform the modulo operation on floating-point numbers
	}
	else
	{
		cout << "Division by zero isn't allowed!" << endl;
	}
	
	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
