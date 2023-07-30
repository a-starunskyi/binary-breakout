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
	int n;

	// TODO: Take input from the user

	cout << "Enter a number: " << endl;
	cin >> n;

	// TODO: Implement nested loops to print a pyramid of stars of n rows

	for (int a = 1; a <= n; a++)
	{
		for (int b = 1; b <= a; b++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
