// Problem: Write a recursive function that calculates the factorial of a number.

#include<iostream>
using namespace std;

int factorial(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}

int main() {
	int num = 0;

	cout << "Enter a number: ";
	cin >> num;
	
	int result = factorial(num);

	cout << "Factorial of " << num << " is: " << result << endl;
	return 0;
}
