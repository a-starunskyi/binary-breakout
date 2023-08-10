// Problem: Create a class 'Unique' that does not permit copying. Ensure that any attempts to copy objects of this class result in a compile error.

#include<iostream>
#include<string>
using namespace std;

// TODO: Declare the 'Unique' class that does not allow copying
class Unique
{
public:
	Unique(int somthing)
		:smth(somthing)
	{
	}


	int smth;

private:

	Unique(const Unique&);

	Unique& operator= (const Unique&);

};

int main() 
{
	Unique one(220);

	//Unique two(one); dont work


	
		
	// TODO: Try to copy an instance of the 'Unique' class and check for compile error
	return 0;
}
