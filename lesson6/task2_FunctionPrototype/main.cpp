// Problem: Create a function prototype for a function that takes two integers as parameters and returns their sum. 
// Then define and call this function in your main function.

#include<iostream>
using namespace std;

int sum(int a, int b);

int main() {
	int numOne = 0;
	int numTwo = 0;

	cout << "Enter the first integer: ";
	cin >> numOne;
	
	cout << "Enter the second integer: ";
	cin >> numTwo;

	int result = sum(numOne, numTwo);
	
	cout << "The sum of " << numOne << " and " << numTwo << " is: " << result;
	return 0;
}
int sum(int a, int b) {
	return a + b;
 }