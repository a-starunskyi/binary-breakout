// Problem: Write a function that uses automatic return type deduction to add two auto variables together.

#include<iostream>
using namespace std;

// TODO: Write a function that uses automatic return type deduction
auto add(int a, int b);

int main() 
{
	int numOne = 0;
	int numTwo = 0;

	cout << "Input two number " << endl;
	cin >> numOne;
	cin >> numTwo;
	
	cout << "Summ of numbers =  " << add(numOne, numTwo) << endl;
	// TODO: Call the function
	return 0;
}

auto add(int a, int b)
{
	return a + b;
}