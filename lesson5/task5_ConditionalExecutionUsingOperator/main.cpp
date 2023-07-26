// Problem: Write a program that displays "Odd" for odd numbers and "Even" for even numbers using the ternary operator.

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Input the value for the number: "
	cin >> num;
	(num % 2 == 0) ? cout << "The number is even." : cout << "The number is odd.";
	return 0;
}
