// Problem 20: Write a program that demonstrates why references are useful.

#include <iostream>
using namespace std;

// Function to increment a value using a reference
void incrementValue(int& value) {
	value++;
}

int main() {
	int num = 5;

	cout << "Original value: " << num << endl;

	incrementValue(num);

	cout << "After incrementing: " << num << endl;

	return 0;
}