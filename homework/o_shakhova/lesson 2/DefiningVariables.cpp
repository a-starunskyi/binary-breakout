
// DefiningVariables.cpp : This file contains the 'main' function. Program execution begins and ends there.

// Preprocessor directive that includes header iostream
#include <iostream>

//Getting console output and end - line from std 
using std::cout;
using std::endl;

// Start of program: function block main()
int main()
{
	// Write the variables and assign my values
	int myInt = 37;
	char myChar = 'Q';
	bool myBool = true;
	float myFloat = 16.25f;
	double myDouble = 0.10958437;

	cout << " Variable values: " << endl;
	cout << " Integer variable (int): " << myInt << endl;
	cout << " Character variable (char): " << myChar << endl;
	cout << " Boolean variable (bool): " << myBool << endl;
	cout << " Flouting-point variable (float): " << myFloat << endl;
	cout << " Double precision floating-point variable (double): " << myDouble << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
