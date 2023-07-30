// Problem: Understand how function calls are managed by the microprocessor by writing a program that involves several nested function calls.

#include<iostream>
using namespace std;
 
// First function: Adding two integers
int add(int a, int b) {
	return a + b;
}

// Second function: Multiplying two integers
int multiply(int a, int b) {
	return a * b;
}

// Third function: Calculating the sum of squares using the first function
int sumOfSquares(int x, int y) {
	int square1 = multiply(x, x);
	int square2 = multiply(y, y);
	int sum = add(square1, square2);
	return sum;
}

// Fourth function: Calculating the cube of an integer
int cube(int a) {
	return multiply(a, multiply(a, a));
}

 // Fifth function: Calculating the sum of cubes using the fourth function
int sumOfCubes(int x, int y){
int cube1 = cube(x);
int cube2 = cube(y);
int sum = add(cube1, cube2);
return sum;
}

int main() {
	int num1 = 3, num2 = 4;
	
	// Nested function calls to calculate sums of squares and cubes
	int result1 = sumOfSquares(num1, num2);
	int result2 = sumOfCubes(num1, num2);

	cout << "Sum of squares: " << result1 << endl;
	cout << "Sum of cubes: " << cube << endl;

	return 0;
}
