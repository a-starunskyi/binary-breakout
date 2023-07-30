// Problem: Write a function that takes three float values: a, b, and c. 
// The function should return the result of the quadratic formula, which is (-b ± sqrt(b²-4ac)) / (2a).

#include<iostream>
#include<cmath>
using namespace std;

flouat quadraticFormula(float a, float b, float c) {
	float discriminant = b * b - 4 * a * c;

	float sqrtDiscriminant = sqrt(discriminant);

	float solution1 = (-b + sqrtDiscriminant) / (2 * a);
	float solution2 = (-b - sqrtDiscriminant) / (2 * a);

	return solution 1;
}

int main() {
	float a = 0;
	float b = 0;
	float c = 0;

	cout << "Enter the value of a: ";
	cin >> a;
	cout << "Enter the value of b: ";
	cin >> b;
	cout << "Enter the value of c: ";
	cin >> c;

	float result = quadraticFormula(a, b, c);
	
	cout << "The result of the quadratic formula is: " << result << endl;
	return 0;
}
