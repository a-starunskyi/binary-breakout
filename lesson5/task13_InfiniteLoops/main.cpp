// Problem: Write a program that keeps taking numbers from the user until a negative number is entered.

#include<iostream>
using namespace std;

int main() {
	int num = 0;

	// TODO: Implement an infinite loop that keeps taking numbers from the user until a negative number is entered
	do
	{
		cout << "Enter a number: " << endl;
		cin >> num;
		if (num < 0)
		{
			cout << "Goodbye" << endl;
			break;
		} 
	} while (num > 0);

	return 0;
}
