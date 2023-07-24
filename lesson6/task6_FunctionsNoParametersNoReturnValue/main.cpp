// Problem: Write a function that asks the user to enter their name and greets the user. 
// This function should have no parameters and no return value.

#include<iostream>
using namespace std;

// TODO: Declare and define the function that asks the user's name and greets the user

void helloUser();

int main() 
{
	helloUser();
	// TODO: Call the function
	return 0;
}

void helloUser()
{
	string name;
	cout << "Please enter your name: ";
	cin >> name;

	cout << "Hello, " << name << endl;
}
