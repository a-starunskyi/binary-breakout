// Problem: Write a program that calculates the factorial of a number using a while loop.

#include<iostream>
using namespace std;

int main() {
	int num = 0;
	int res = 1;
	// TODO: Take input from the user
	cout << "Enter a number to canculate the factorial: " << endl;
	cin >> num;

	// TODO: Implement a while loop to calculate and display the factorial of the number
	while (num > 1)
	{
		res *= num; 
		num--;
	}
	cout << "The factorial is: " << res << endl;
	return 0;
}
