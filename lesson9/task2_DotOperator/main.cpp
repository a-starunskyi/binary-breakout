// Problem: Declare a class named 'Circle' with a member function to calculate its area. Create an instance of this class and use the dot operator to access the member function.

#include<iostream>
using namespace std;

// TODO: Declare the 'Circle' class
class Circle
{
public :
	int radius;
	int diameter;

	void radiusOfCircle();

};

int main() 
{
	// TODO: Create an instance of the 'Circle' class and use the dot operator to access the member function
	Circle circle;

	circle.diameter = 10;
	circle.radius = 5;

}
