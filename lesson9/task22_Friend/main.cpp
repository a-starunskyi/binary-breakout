// Problem: Create a class 'Friendly' and declare another class or a function as a friend of 'Friendly'.

#include<iostream>
using namespace std;

// TODO: Declare the 'Friendly' class
class Friendly
{
	int info;

public:

	Friendly(int inf)
		:info(inf)
	{
	}

	friend void testText(const Friendly& info);

};

void testText(const Friendly& info)
{
	cout << "Test = "<<info.info << endl;
}


int main() 
{
	Friendly test(20);

	testText(test);

	// TODO: Declare a friend of the 'Friendly' class
	return 0;
}
