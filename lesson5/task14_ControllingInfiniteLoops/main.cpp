// Problem: Write a program that keeps taking numbers from the user until a negative number is entered, but terminates after 100 inputs.

#include<iostream>
using namespace std;

int main() {
	const int max = 100;
	int num;
	int count = 0;

	// TODO: Implement an infinite loop that keeps taking numbers from the user until a negative number is entered or 100 inputs are taken


	while (count < max)
	{
		cout << "Enter a number: " << endl;
		cin >> num;

		if (num < 0)
		{
			break;
		}

		count++;
	}
	cout << "You entered: " << count << endl;


		return 0;
}
