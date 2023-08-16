// Problem: Write a function that swaps the values of two integers. Pass these integers by reference.

#include<iostream>
using namespace std;

void swapIntegers(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

// TODO: Declare and define the function that swaps two integers

int main() {
	// TODO: Call the function
	int x = 5; 
	int y = 18;

	cout << "Before swaping: " << x << "; " << y << endl;
	
	swapIntegers(x, y);
	cout << "After swaping: " << x << "; " << y << endl;

	return 0;
}
