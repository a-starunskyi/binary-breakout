// Problem: Write a program that calculates the sum of numbers from 1 to n.

#include<iostream>
using namespace std;

int main() {
	int n;
	int sum = 0;

	cout << "Input a positive integer: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		sum += 1;
	}

	cout << "The sum of numbers from 1 to " << n << " is: " << sum;

	return 0;
}
