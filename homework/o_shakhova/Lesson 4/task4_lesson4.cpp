// task4_lesson4.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* Design a C++ program that takes three integers from the user. Use relational operators to determine the largest and smallest numbers among them.*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "Enter three integers: " << endl;
	int num1 = 0, num2 = 0, num3 = 0; // Initialization
	cin >> num1 >> num2 >> num3; // Enter numbers from user

	// Find the largest number
	int largest = num1; // Assume num1 is the largest
	if (num2 > largest)
		largest = num2; // If num2 is larger, update the largest
	if (num3 > largest)
		largest = num3; // If num3 is larger, update the largest

	// Find the smallest number
	int smallest = num1; // Assume num1 is the smallest
	if (num2 < smallest)
		smallest = num2; // If num2 is smaller, update the smallest
	if (num3 < smallest)
		smallest = num3; // If num3 is smaller, update the smallest

	cout << "Largest number: " << largest << endl;
	cout << "Smallest number: " << smallest << endl;

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
