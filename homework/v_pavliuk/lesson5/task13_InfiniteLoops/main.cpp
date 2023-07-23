// Problem: Write a program that keeps taking numbers from the user until a negative number is entered.

#include<iostream>

using namespace std;

int main() {

	// TODO: Implement an infinite loop that keeps taking numbers from the user until a negative number is entered

	int number = 0;
	
	do 
	{
		cout << "Enter integer number: ";
		cin >> number;
		if (number >= 0)
		{
			cout << "The number entered is positive: " << endl;
		} 
		
	} while (number >= 0);
	cout << "The number entered is negative" << endl;


	return 0;
}
