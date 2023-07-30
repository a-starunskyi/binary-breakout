// Problem: Write a function that asks the user to enter their name and greets the user. 
// This function should have no parameters and no return value.

#include<iostream>
using namespace std;
void greetUser() {
	string name;
	cout << "Enter your name: ";
	cin >> name;

	cout << "Hello, " << name << "! Nice to meet you!" << endl;
}

int main() {
	greetUser();

	return 0;
}
