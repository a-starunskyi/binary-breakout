// Problem: Create a function prototype for a function that takes two integers as parameters and returns their sum. 
// Then define and call this function in your main function.

#include<iostream>
using namespace std;

// TODO: Declare the function prototype
int sum(int num1, int num2);

int main() {
	int num1, num2;
	cout << "Enter the first number: " << endl;
	cin >> num1;

	cout << "Enter the second number: " << endl;
	cin >> num2;

	int result = sum(num1, num2);
	cout << "Result is: " << result << endl;

	// TODO: Define and call the function
	return 0;
}
int sum(int num1, int num2)
{
	return num1 + num2;

	}

