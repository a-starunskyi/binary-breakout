// Problem: Write a program that calculates the area of a circle. Use a function to calculate the area.

#include<iostream>
using namespace std;
const float Pi = 3.14159;
float circleArea(float radius) {
	return Pi * radius * radius;
}

int main() {
	float radius;

	cout << "Input the value for the radius of the circle: ";
	cin >> radius;

	float area = circleArea(radius);

	cout << "The area of the circle is: " << area;

	return 0;
}
