// Problem: Write a function that takes two integers as parameters and returns their product. Give these parameters default values.

#include<iostream>
using namespace std;

// TODO: Declare and define the function that multiplies two integers with default values

int miltInt(int a, int b);

int main() 
{
	int a = 2;
	int b = 4;

	cout << "Multiplication of number =" << miltInt(a,b) << endl;

	// TODO: Call the function
	return 0;
}

int miltInt(int a, int b)
{
	return a * b;
}
