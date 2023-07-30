// Problem: Write a program that outputs numbers from 10 to 1 using the goto statement.

#include<iostream>
using namespace std;

int main() {
	int num = 10;

	// TODO: Implement a loop using 'goto' to display numbers from 10 to 1
Start: 
	cout << num-- << endl;

	if (num != 0)
	{
		goto Start;
	}

	return 0;
}
