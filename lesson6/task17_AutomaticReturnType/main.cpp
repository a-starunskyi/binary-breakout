// Problem: Write a function that uses automatic return type deduction to add two auto variables together.

#include<iostream>
using namespace std;

auto add(int a, int b)
{
	return a + b;
}

// TODO: Write a function that uses automatic return type deduction

int main() {
	int num1 = 6;
	int num2 = 9;

	auto result = add(num1, num2);
	cout << num1 << " + " << num2 << " = " << result << endl;
	// TODO: Call the function
	return 0;
}
