// Problem: Write a recursive function that calculates the factorial of a number.

#include<iostream>
using namespace std;

// TODO: Declare and define the recursive function that calculates factorial of a number
int factorial(int n) 
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}

 

int main() {
	// TODO: Call the recursive function
	int number = 5;
	int result = factorial(number);
	cout << "Factorial of number: " << number << " = " << result << endl;

	return 0;
}
