// Problem: Write a function that takes three float values: a, b, and c. 
// The function should return the result of the quadratic formula, which is (-b ± sqrt(b²-4ac)) / (2a).

#include<iostream>
#include<cmath>
using namespace std;

float quadraticFormula(float a, float b, float c, bool usePositiveRoot) {
	float discriminant = b * b - 4 * a * c;
	
	if (discriminant < 0) {
		return NAN;
	}

	float sqrtDiscriminant = sqrt(discriminant);
	float solution;

	if (usePositiveRoot) {
		 solution = (-b + sqrtDiscriminant) / (2 * a);
	}
	else {
		 solution = (-b - sqrtDiscriminant) / (2 * a);
	}

	return solution;
}

int main() {
	float a = 0;
	float b = 0;
	float c = 0;
	bool usePositiveRoot = true;

	cout << "Enter the value of a: ";
	cin >> a;
	cout << "Enter the value of b: ";
	cin >> b;
	cout << "Enter the value of c: ";
	cin >> c;

	cout << "Do you want to use the positive root? (1 - yes, 0 - no): ";
	cin >> usePositiveRoot;

	float result = quadraticFormula(a, b, c, usePositiveRoot);
	if (!isnan(result)) {
		cout << "The result of the quadratic formula is: " << result << endl;
	}
	else {
		cout << "No real solution." << endl;
	}
	return 0;
}
