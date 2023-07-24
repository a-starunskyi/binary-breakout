// Problem: Write a function that takes three float values: a, b, and c. 
// The function should return the result of the quadratic formula, which is (-b ± sqrt(b²-4ac)) / (2a).

#include<iostream>
using namespace std;

float quadraticFormula(float a, float b, float c);
// TODO: Declare and define the function that calculates the quadratic formula

int main() 
{
	float numOne = 2;
	float numTwo = 2;
	float numThree = 2;

	cout << quadraticFormula(numOne, numTwo, numThree) << endl;
	// TODO: Call the function to calculate the quadratic formula
	return 0;
}

float quadraticFormula(float a, float b, float c)
{

	float discriminant = b * b - 4 * a * c;


	return discriminant;
}
