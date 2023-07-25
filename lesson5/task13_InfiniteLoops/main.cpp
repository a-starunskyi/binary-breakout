// Problem: Write a program that keeps taking numbers from the user until a negative number is entered.

#include<iostream>
using namespace std;

int main() {

	// TODO: Implement an infinite loop that keeps taking numbers from the user until a negative number is entered

	int num = 0;
	do
	{
		cout << "Enter the number: " << endl;
		cin >> num;

	} while (num >= 0);

	cout << "Termination of the program" << endl;

	return 0;
}
