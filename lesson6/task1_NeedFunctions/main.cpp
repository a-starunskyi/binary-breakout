// Problem: Write a program that calculates the area of a circle. Use a function to calculate the area.

#include<iostream>
const double PI = 3.14159265;
double area(double radius);
double radius = 5;

// TODO: Declare and define the function to calculate area of a circle

int main() {
	//std::cout << "enter a radius: " << std::endl;
	//std::cin >> radius; 
	std::cout << "the area is: " << area(radius);


	// TODO: Call the function to calculate area of a circle
	return 0;
}
double area(double radius) {
	return PI * radius * radius;
}
