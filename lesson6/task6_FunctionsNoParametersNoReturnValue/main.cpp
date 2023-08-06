// Problem: Write a function that asks the user to enter their name and greets the user. 
// This function should have no parameters and no return value.

#include<iostream>
void greetUser() {
	std::string name;
	std::cout << "enter your name: ";
	std::cin >> name;
	std::cout << "Greetings: " << name << " nice to meet you!";
}

// TODO: Declare and define the function that asks the user's name and greets the user

int main() {
	greetUser();
	// TODO: Call the function
	return 0;
}
//suc303d