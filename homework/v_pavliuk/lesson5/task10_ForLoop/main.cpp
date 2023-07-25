// Problem: Write a program that calculates the sum of numbers from 1 to n.

#include<iostream>

using namespace std;

int main() {
	// TODO:Take input from the user

	// TODO:Implement a for loop to calculate and display the sum of numbers from 1 to n
	
	int result = 0;
	int n = 0;
	cout << "Enter a number: ";
	cin >> n;


	for (int i = 1; i <= n; i++)
	{
		result += i;
	}

	cout << "The sum of numbers from 1 to " << n << " is " << result;

	return 0;
}
