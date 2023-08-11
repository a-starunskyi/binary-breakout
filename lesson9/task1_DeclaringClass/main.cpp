// Problem: Declare a class named 'Car' with the private attributes 'color' and 'speed', and provide public functions to get and set these attributes.

#include<iostream>
using namespace std;

// TODO: Declare the 'Car' class
class Car
{
private:

public:
	int speed;
	string color;

	void getSpeed()
	{
		cout << speed << endl;
	}
	void getColor()
	{
		cout << color << endl;
	}

};

int main()
{
	Car sportCar;

	sportCar.color = "Red";

	sportCar.getColor();
	// TODO: Create an instance of the 'Car' class
	return 0;
}
