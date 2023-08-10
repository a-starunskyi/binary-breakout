// Problem: Declare a class 'ShallowPerson' that performs a shallow copy in its copy constructor. Demonstrate a problem that can arise from shallow copying.

#include<iostream>
using namespace std;

// TODO: Declare the 'ShallowPerson' class
class ShallowPerson
{
public:
	ShallowPerson()
	{
	}

	ShallowPerson(int agePerson)
		: age(agePerson)
	{

	}

	int age;

};

int main() 
{
	ShallowPerson prsOne(21);
	ShallowPerson prsTwo;

	

	cout << prsTwo.age << endl;

	// TODO: Create instances of the 'ShallowPerson' class and demonstrate a problem that can arise from shallow copying
	return 0;
}
