// Problem: Write a function that swaps the values of two integers. Pass these integers by reference.

#include<iostream>
using namespace std;

void swapIntegers(int& num1, int& num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int main() {
	int num1, num2;
	
	cout << "Enter two integers: ";
	cin >> num1 >> num2;

	cout << "Before swapping: num1 = " << num1 << ", num2= " << num2 << endl;
	// Calling the function to swap the values of numbers
	swapIntegers(num1, num2);
	
	cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

	return 0;
}
