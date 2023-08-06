// Problem: Write a function that takes three float values: a, b, and c. 
// The function should return the result of the quadratic formula, which is (-b ± sqrt(b²-4ac)) / (2a).

#include<iostream>
#include<cmath>
std::pair <float, float> quadForm(float a, float b, float c) {
	float discriminant = b * b - 4 * a * c;
	// with sqrt we try to find square root(who would have thought) of discriminant
	float quadFormResult1 = (-b - std::sqrt(discriminant)) / (2 * a);
	float quadFormResult2 = (-b + std::sqrt(discriminant)) / (2 * a);
	return std::make_pair(quadFormResult1, quadFormResult2);
}
int main() {

	std::cout << "enter first integer: ";
	float num1 = 0;
	std::cin >> num1;
	std::cout << "enter second integer: ";
	float num2 = 0;
	std::cin >> num2;
	std::cout << "enter third integer: ";
	float num3 = 0;
	std::cin >> num3;
	//  it calculates the two results using the quadratic formula and returns them as a std::pair<float, float>
	std::pair<float, float> result = quadForm(num1, num2, num3);
	std::cout << "the result is: " << result.first << " and " << result.second << std::endl;
	
	return 0;
	 
}












/*  */