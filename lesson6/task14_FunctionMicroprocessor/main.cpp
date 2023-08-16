// Problem: Understand how function calls are managed by the microprocessor by writing a program that involves several nested function calls.

#include<iostream>
using namespace std;

// TODO: Write several nested function calls to understand how they're managed by the microprocessor
int add(int a, int b)
	{
		return a + b;
	}

int multiply(int a, int b)
{
	return a * b;
}

int canculate(int x, int y)
{
	int sum = add(x, y);
	int product = multiply(x, y);
	return add(sum, product);
}
int main() {
	// TODO: Call the nested functions
	int num1 = 6;
	int num2 = 2;

	int result = canculate(num1, num2);
	cout << "Result is: " << result << endl;

	return 0;
}
