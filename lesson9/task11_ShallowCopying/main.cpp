// Problem: Declare a class 'ShallowPerson' that performs a shallow copy in its copy constructor. Demonstrate a problem that can arise from shallow copying.

#include<iostream>
#include <cstring>
using namespace std;

// TODO: Declare the 'ShallowPerson' class

class ShallowPerson 
{
private:

	string name;
	int* age;

public:

	ShallowPerson()
	{
		age = NULL;
	}

	ShallowPerson(string n_name, int n_age)
		:name(n_name)
	{
		age = new int;
		*age = n_age;
	}


	void setAge(int n_age)
	{
		*age = n_age;
	}

	void display()
	{
		cout << name << endl;
		cout << *age << endl;
	}

};

int main()
{
	ShallowPerson human1("Mark", 21);
	ShallowPerson human2("Nikita", 22);

	human1.display();
	human2.display();

	human1 = human2;

	cout << endl;


	human1.display();
	human2.display();

	cout << endl;

	human2.setAge(2323);

	human1.display(); // this also changes because of shallow copy
	human2.display();
	
	// TODO: Create instances of the 'ShallowPerson' class and demonstrate a problem that can arise from shallow copying
	return 0;
}
