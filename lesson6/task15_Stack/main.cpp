// Problem: Demonstrate understanding of the stack by writing a recursive function that generates a stack overflow error.

#include<iostream>
using namespace std;

// TODO: Write a recursive function that generates a stack overflow error to demonstrate understanding of the stack

int recursiveFunction(int a);

int main() 
{

	// TODO: Call the recursive function
	recursiveFunction(10000);

	return 0;
}

int recursiveFunction(int a)
{
	if (a < -0)
	{
		cout << " Exit from the recursion " << endl;
		return 0;
	}

	recursiveFunction(a - 1);

	return 0;
}
