// Problem: Write a program that calculates the area of a circle. Use a function to calculate the area.

#include<iostream>
using namespace std;

// TODO: Declare and define the function to calculate area of a circle
const double pi = 3.1415926535;

//Function Declaration
double area(double radius);


int main() {
	// TODO: Call the function to calculate area of a circle

	cout << "Enter a radius: " << endl;
	double radius = 0;
	cin >> radius;

	cout << "Area is: " << area (radius) << endl;

	return 0;
}

double area(double radius)
{
	return pi * radius * radius;
}
