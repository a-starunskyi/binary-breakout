// Problem: Write a program that calculates the area of a circle. Use a function to calculate the area.

#include<iostream>
using namespace std;
const double Pi = 3.14159;
double circleArea(double radius) {
	return Pi * radius * radius;
}

int main() {
	double radius;

	cout << "Input the value for the radius of the circle: ";
	cin >> radius;

	double area = circleArea(radius);

	cout << "The area of the circle is: " << area;

	return 0;
}
