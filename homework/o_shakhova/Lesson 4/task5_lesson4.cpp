// task5_lesson4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a C++ program that uses logical operators (!, &&, ||) to manipulate Boolean values entered by the user.

#include <iostream>
using namespace std;

int main()
{
	cout << "Answer questions with 0 or 1" << endl;
	cout << "Do you have a free time? ";
	bool freeTime = false;
	cin >> freeTime;

	cout << "Did you have a desire? ";
	bool desire = false;
	cin >> desire;

	if (freeTime && desire)
	{
		cout << "Congratulations, you can learn whatever you want!" << endl;
	}
	else
	{
		cout << "Try to understand your interests and set aside time for hobbies" << endl;
	}
	if (freeTime || desire)
	{
		cout << "Cool, you are already halfway to your dream!" << endl;
	}
	if (!freeTime && !desire)
	{
		cout << "Ask for help or delegate tasks" << endl;
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
