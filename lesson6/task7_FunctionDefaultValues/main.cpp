// Problem: Write a function that takes two integers as parameters and returns their product. Give these parameters default values.

#include<iostream>
using namespace std;

int multiply(int a = 1, intb = 1) {
	return a * b;
}

int main() {
	int result = multiply();

	cout << "The result is: " << result;

	return 0;
}
