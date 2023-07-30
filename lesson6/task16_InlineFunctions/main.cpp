// Problem: Write an inline function that squares a number.

#include<iostream>
using namespace std;

inline int square(int num) {
	return num * num;
}
int main() {
	int number = 0;
	cout << "Enter a number: ";
	cin >> number;

	int result = square(number);

	cout << "The square of " << number << " is: " << result;

	 return 0;
}
