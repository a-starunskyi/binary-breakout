// Problem: Write a program that outputs numbers from 10 to 1 using the goto statement.

#include<iostream>
using namespace std;

int main() {
	int num = 10;

Start:
	
	cout << num << endl;
	num--;

	if (num > 0)
	{
		goto Start;
	}
	

	// TODO: Implement a loop using 'goto' to display numbers from 10 to 1

	return 0;
}
