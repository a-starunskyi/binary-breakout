// Problem: Write a program that calculates the area of a circle. Use a function to calculate the area.

#include<iostream>
using namespace std;

// TODO: Declare and define the function to calculate area of a circle

const double Pi = 3.14159265;

double SurfaceArea(double radius, double height);

int main() {
	// TODO: Call the function to calculate area of a circle

	cout << "Enter the radius of the cylinder: ";
	double radius = 0;

	cin >> radius;
	cout << "Enter the height of the cylinder: ";

	double height = 0;
	cin >> height;

	cout << "Surface area: " << SurfaceArea(radius, height) << endl;

	return 0;
}


double SurfaceArea(double radius, double height)
{
	double area = 2 * Pi * radius * radius + 2 * Pi * radius * height;
	return area;
}
