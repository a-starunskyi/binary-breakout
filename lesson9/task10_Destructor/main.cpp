// Problem: Declare a class 'Computer' with a destructor that prints a message when an object is about to be destroyed.

#include<iostream>
using namespace std;

// TODO: Declare the 'Computer' class with a destructor
class Computer
{
public:
	Computer(int ram)
	{
		RAM = ram;
	}

	~Computer()
	{
		cout << "This class deleted" << endl;
	}
private:

	int RAM;
};

int main() {
	// TODO: Create an instance of the 'Computer' class and see what happens when it gets destroyed

	Computer PC(2048);
	
	return 0;
}
