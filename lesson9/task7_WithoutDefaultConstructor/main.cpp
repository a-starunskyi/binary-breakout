// Problem: Declare a class 'Car' with attributes 'brand' and 'year'. Make sure it does not have a default constructor. Create an instance of the 'Car' class.

#include<iostream>
using namespace std;

// TODO: Declare the 'Car' class without a default constructor
class Car
{
public:
	Car(string brandCar, int yearCar)
	{
		brand = brandCar;
		year = yearCar;
	};

	string brand;
	int year;
};


int main() 
{
	//Car sportcar; Don't work becose standart constructor absent
	Car sportcar("Ferari", 2021);

	cout << "Brand this car = " << sportcar.brand << endl;
	cout<<"Year realese this car = " << sportcar.year << endl;
	// TODO: Create an instance of the 'Car' class
	return 0;
}
