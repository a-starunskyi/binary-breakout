// Problem: Understand how function calls are managed by the microprocessor by writing a program that involves several nested function calls.

#include<iostream>
using namespace std;

// TODO: Write several nested function calls to understand how they're managed by the microprocessor

#include<iostream>
using namespace std;

int add(int a, int b) 
{
	return a + b;
}

int multiply(int a, int b) 
{
	return a * b;
}

int sumOfSquares(int x, int y) 
{
	int square1 = multiply(x, x);

	int square2 = multiply(y, y);

	int sum = add(square1, square2);

	return sum;
}

int cube(int a) 
{
	return multiply(a, multiply(a, a));
}


int sumOfCubes(int x, int y) 
{
	int cube1 = cube(x);
	int cube2 = cube(y);
	int sum = add(cube1, cube2);
	return sum;
}

int main() 
{
	
	int num1 = 5;
	int num2 = 5;

	int result1 = sumOfSquares(num1, num2);
	int result2 = sumOfCubes(num1, num2);

	cout << "Sum of squares: " << result1 << endl;
	cout << "Sum of cubes: " << cube << endl;

	return 0;
}