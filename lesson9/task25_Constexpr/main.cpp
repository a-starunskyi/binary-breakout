// Problem: Create a class 'Constant' with a constexpr constructor. Create a constexpr object of this class.
	
#include<iostream>
using namespace std;

// TODO: Declare the 'Constant' class with a constexpr constructor
class Constant
{
	int number;

public:
	constexpr Constant(int num)
		: number(num) 
	{
	}

	constexpr int GetAge() const 
	{ 
		return number;
	}
};

int main() 
{
	constexpr Constant tst(22);

	// TODO: Create a constexpr object of the 'Constant' class
	return 0;
}
