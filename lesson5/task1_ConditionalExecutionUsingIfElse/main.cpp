// Problem: Write a program that takes two numbers from the user and displays which one is greater.

#include<iostream>
using namespace std;

int main() {
	int num1, num2;
	cout << "Enter values for number 1 and 2";
	cin >> num1;
	cin >> num2;
		if (num1 > num2) {
			cout << "The greater number is: " << num1;
		}
		else
		{
			cout << "The greater number is: " << num2;
		}
	return 0;
}
