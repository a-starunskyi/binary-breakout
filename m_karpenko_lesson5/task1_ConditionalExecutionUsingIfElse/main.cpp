// Problem: Write a program that takes two numbers from the user and displays which one is greater.

#include<iostream>

using namespace std;

int main() 
{

	int num1 = 0;
	int num2 = 0;

	cout << "Input two number" << endl;

	// TODO: Take input from the user

	cin >> num1;
	cin >> num2;

	// TODO: Implement the if ... else logic to determine and display the greater number

	if (num1 > num2)
	{
		cout << "Number one: " << num1 << " greather then: " << num2 << endl;
	}
	else if (num2 > num1)
	{
		cout << "Number two: " << num2 << " greather then: " << num1 << endl;
	}
	else
	{
		cout << "Numbers equal " << endl;
	}
	return 0;
}
