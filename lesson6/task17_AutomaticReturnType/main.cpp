// Problem: Write a function that uses automatic return type deduction to add two auto variables together.

#include<iostream>
using namespace std;

auto add(auto num1, auto num2) {
	return num1 + num2;
}

int main() {
	auto number1 = 5;
	auto number2 = 7;

	auto result = add(number1 + number2);

	cout << "Result: " << result << endl;
	return 0;
}
