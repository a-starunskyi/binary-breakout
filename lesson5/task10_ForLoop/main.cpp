// Problem: Write a program that calculates the sum of numbers from 1 to n.

#include<iostream>
using namespace std;

int main() {
	int n;

	// TODO: Take input from the user
	cout << "Enter the number to calculate the sum of numbers from 1 to n: " << endl;
	cin >> n;

	// TODO: Implement a for loop to calculate and display the sum of numbers from 1 to n
	int sum = 0;

	for (int i = 1; i <= n; i++)
		sum += i;
	cout << "The result is: " << sum << endl;


	return 0;
}
