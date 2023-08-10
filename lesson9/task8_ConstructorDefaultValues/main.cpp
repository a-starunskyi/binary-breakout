// Problem: Declare a class 'Bike' with a constructor that has default values for its parameters.

#include<iostream>
using namespace std;

// TODO: Declare the 'Bike' class with a constructor that has default values
class Bike
{
public:

	Bike(int speed = 200, string brandBike = "Harley")
		:speed(speed),brand(brandBike)
	{

	};

	int speed;
	string brand;
};


int main() 
{
	Bike moto;
	cout << moto.speed << endl;
	cout << moto.brand << endl;
	// TODO: Create an instance of the 'Bike' class
	return 0;
}
