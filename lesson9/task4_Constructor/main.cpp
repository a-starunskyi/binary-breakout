// Problem: Declare a class 'Employee' with a constructor that sets its attributes. Explain the purpose of a constructor in comments.

#include<iostream>
using namespace std;

// TODO: Declare the 'Employee' class with a constructor
class Employee
{
	int height;

public:

	Employee(int he)
	{
		height = he;
	};// declaration of a constructor
};


int main() 
{
	// TODO: Create an instance of the 'Employee' class and explain the purpose of a constructor in comments

	Employee emp(12);//Does not allow to create an element without setting its height


	return 0;
}
