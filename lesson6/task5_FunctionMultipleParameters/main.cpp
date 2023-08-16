// Problem: Write a function that takes three float values: a, b, and c. 
// The function should return the result of the quadratic formula, which is (-b ± sqrt(b²-4ac)) / (2a).

#include<iostream>
#include <math.h>
using namespace std;

float formula(float a, float b, float c);
// TODO: Declare and define the function that calculates the quadratic formula

int main() {

	float num1 = 4.7;
	float num2 = 5.5;
	float num3 = 7.3;

	float resPlus = 0.f;
	float resMinus = 0.f;

	formula(num1, num2, num3, resPlus, resMinus);

	cout <<  resPlus << resMinus << endl;
	// TODO: Call the function to calculate the quadratic formula

	return 0;
}
void formula(float a, float b, float c, float& outPlus, float& outMinus)
{
	float res = sqrt(pow(b, 2.0) - 4 * a * c);

	outPlus = -b + res;
	outMinus = -b - res;

	outPlus /= 2 * a;
	outMinus /= 2 * a;
}