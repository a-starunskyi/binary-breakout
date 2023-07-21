// Problem: Write a program that calculates the sum of numbers from 1 to n.

#include<iostream>
using namespace std;

int main() {
	int n = 0;
	int sum = 0;

	cout << "Input number: " << endl;

	// TODO: Take input from the user

	cin >> n;

	// TODO: Implement a for loop to calculate and display the sum of numbers from 1 to n

	for (int i = 0; i < n; i++)
	{
		sum += i;

	}

	cout << "Sum of number = " << sum << endl;
	return 0;
}
