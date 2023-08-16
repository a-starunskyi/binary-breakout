// Problem: Write an inline function that squares a number.

#include<iostream>
using namespace std;

inline long num(int inputNum)
{
	return inputNum * inputNum;
}

// TODO: Write an inline function that squares a number

int main() 
{
	// TODO: Call the inline function
	cout << "Enter an integer: ";
	int inputNum = 0;
	cin >> inputNum;

	cout << "Squared is: " << num(inputNum) << endl;

	return 0;
}
