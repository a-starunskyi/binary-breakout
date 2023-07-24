// Problem: Write a program that calculates the area of a circle. Use a function to calculate the area.

#include<iostream>
using namespace std;

// TODO: Declare and define the function to calculate area of a circle
int areaCircle(int a, int b);

int main()
{
	const int pi = 3.14;
	int rad = 0;

	cout << "Input radius: ";
	cin >> rad;

	cout << "Area of circle = "  << areaCircle(pi, rad) << endl;
	// TODO: Call the function to calculate area of a circle
	return 0;
}

int areaCircle(int a, int b)
{
	int areaCi = a*pow(b,2);

	return areaCi;
}