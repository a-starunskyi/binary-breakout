// Problem: Write a program that takes an integer n as input and prints a pyramid of stars of n rows. 
// The pyramid should be aligned to the left. 

// For example, if n = 4, the output should look like this:
// *
// **
// ***
// ****

#include<iostream>
using namespace std;

int main() {
	// TODO: Take input from the user

	// TODO: Implement nested loops to print a pyramid of stars of n rows

	int n;
	cout << "Enter the number: ";
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= i; ++j) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}
