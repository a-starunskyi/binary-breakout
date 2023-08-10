// Problem: Create a class 'Converter' that has a constructor which can be used for type conversion.

#include<iostream>
using namespace std;

// TODO: Declare the 'Converter' class
class Converter
{
	int num;
public:

	Converter(int number) 
		: num(number) 
	{
	}
};

int main() 
{
	// TODO: Use the 'Converter' class for type conversion
	Converter one(10);

	return 0;
}
