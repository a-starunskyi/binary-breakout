// Problem 22: Write a function that takes an integer reference as a parameter and doubles its value. 
// Call this function from your main function.

#include <iostream>
using namespace std;

void doubleNumber(int& number)
{
	number += number;
}

int main()
{
	cout << "Enter a number : ";
	int number = 0;
	cin >> number;

	doubleNumber(number);

	cout << "Double number is: " << number << endl;

	return 0;
}