// Problem: Write a program that calculates the factorial of a number using a while loop.

#include<iostream>
using namespace std;

int main() {
	int num;
	int i = 1;
	long int fаctorial = 1;

	cin >> num;

	while(i<num)
	{
		fаctorial *= i;
		cout << fаctorial << endl;
		i++;
	}
	// TODO: Take input from the user

	// TODO: Implement a while loop to calculate and display the factorial of the number

	return 0;
}
