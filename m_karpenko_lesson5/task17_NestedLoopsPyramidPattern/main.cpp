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
	int n = 0;
	int c = 0;

	cout << " Input number " << endl;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j <= c)
			{
				cout << "*";
			}
		}
		c++;
		cout << endl;
	}
	// TODO: Take input from the user

	// TODO: Implement nested loops to print a pyramid of stars of n rows

	return 0;
}
