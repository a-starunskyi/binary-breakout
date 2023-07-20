// Problem: Write a program that keeps taking numbers from the user until a negative number is entered, but terminates after 100 inputs.

#include<iostream>
using namespace std;

int main() {

	int num = 0;
	int i = 1;
	// TODO: Implement an infinite loop that keeps taking numbers from the user until a negative number is entered or 100 inputs are taken

	while (num >= 0)
	{
		cin >> num;
	
		if (i >= 100)
		{
			break;
		}

		i++;
	}

	return 0;
}
