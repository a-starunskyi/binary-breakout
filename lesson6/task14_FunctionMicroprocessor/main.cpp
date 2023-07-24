// Problem: Understand how function calls are managed by the microprocessor by writing a program that involves several nested function calls.

#include<iostream>
using namespace std;

// TODO: Write several nested function calls to understand how they're managed by the microprocessor

int formula(int a, int b);
int sumNum(int a, int b);
int divNum(int c, int d);

int main() 
{

	int a = 0;
	int b = 0;

	cout << "Input two number: " << endl;
	cin >> a;
	cin >> b;

	cout << "Formula result = ";
	cout << formula(a, b) << endl;

	// TODO: Call the nested functions
	return 0;
}

int formula(int a, int b)
{
	int form = sumNum(a, b) - divNum(a, b);

	return form;
}

int sumNum(int a, int b)
{
	int sum = a + b;

	return sum;
}

int divNum(int a, int b)
{
	int div = a / b;
	return div;
}
