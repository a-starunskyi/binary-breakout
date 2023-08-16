// Problem: Write a function that asks the user to enter their name and greets the user. 
// This function should have no parameters and no return value.

#include<iostream>
#include<string>
using namespace std;

// TODO: Declare and define the function that asks the user's name and greets the user

void greetUser() 
{
	string name;
	cout << "Please enter your name: ";
	cin >> name;
	cout << "Hello " << name << ". Nice to meet you." << endl;
}


int main() {
	// TODO: Call the function
	greetUser();
	return 0;
}
