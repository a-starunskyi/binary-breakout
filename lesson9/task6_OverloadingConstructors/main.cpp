// Problem: Declare a class 'Pizza' with attributes 'size' and 'toppings'. Overload the constructor to allow different ways to create a 'Pizza' object.

#include<iostream>
using namespace std;

// TODO: Declare the 'Pizza' class with overloaded constructors
class Pizza
{
public:
	Pizza()
	{
		size = 0;
		topping = "no";
	}

	Pizza(int siz, string topp)
	{
		size = siz;
		topping = topp;
	}

	int size;
	string topping;
};

int main() 
{
	Pizza pizzaOne;
	Pizza pizzaTwo(200,"Carbonara");

	cout << "Size first pizza = " << pizzaOne.size << endl;
	cout << "Topping first pizza = " << pizzaOne.topping << endl;

	cout << endl;

	cout << "Size second pizza = " << pizzaTwo.size << endl;
	cout << "Topping second pizza = " << pizzaTwo.topping << endl;
	// TODO: Create instances of the 'Pizza' class using different constructors
	return 0;
}
