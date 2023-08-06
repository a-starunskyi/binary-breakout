// Problem 22: Write a function that takes an integer reference as a parameter and doubles its value. 
// Call this function from your main function.

#include <iostream>
using namespace std;

void doubleValue(int& num) {
	num *= 2;
}

int main() {
	int num = 5;
	cout << "Original value: " << num << endl;
	// Calling the function to double the value
	doubleValue(num);

	cout << "Doubled value: " << num << endl;

	return 0;
}