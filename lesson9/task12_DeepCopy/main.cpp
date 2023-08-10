// Problem: Declare a class 'DeepPerson' that performs a deep copy in its copy constructor. Show that this avoids the problems associated with shallow copying.

#include<iostream>
using namespace std;

// TODO: Declare the 'DeepPerson' class
class DeepPerson
{
public:
	DeepPerson(int agePerson, string namePerson)
		:age(agePerson), name(namePerson)
	{

	}

	DeepPerson(DeepPerson& sample)
	{
		age = sample.age;
		name = sample.name;
	}

	int age;
	string name;
};


int main() 
{
	DeepPerson markKarpenko(21,"Karpenko Mark");

	DeepPerson nikitaKrutenko( markKarpenko);

	cout << nikitaKrutenko.age << " " << nikitaKrutenko.name << endl;

	// TODO: Create instances of the 'DeepPerson' class and show that deep copying avoids the problems of shallow copying
	return 0;
}
