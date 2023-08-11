// Problem: Declare a struct and a class. Use aggregate initialization to set their members.

#include<iostream>
using namespace std;

// TODO: Declare a struct and a class
struct Aggregate1
{
	int num;
	char hello[6];
	int impYears[5];
};

class Aggregate2
{
public:
	int number;
	char helloWorld[12];
	int impMonth[12];
};

int main()
{
	Aggregate1 a1 = { {12} , {'h','e','l','l','o'} , {1,2,3,4,5} };

	Aggregate2 a2 = { {232} , {' ','H','e','l','l','o',' ','W','o','r','l','d'} , {1,2,3,4,5,6,7,8,9,10,11,12}};

	cout << a1.hello << endl;

	cout << a2.number << endl;
	// TODO: Use aggregate initialization to set the members of the struct and the class
	return 0;
}
