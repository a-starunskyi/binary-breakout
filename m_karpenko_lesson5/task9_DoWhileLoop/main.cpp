// Problem: Write a program that asks the user to enter numbers until a zero is entered.

#include<iostream>
using namespace std;

int main() {
	int n = 1;

	cout << "Input number: " << endl;

	do
	{
		cin >> n;
	} while (n != 0);
	// TODO: Implement a do...while loop to take numbers from user until zero is entered

	return 0;
}
