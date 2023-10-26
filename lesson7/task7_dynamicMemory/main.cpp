// Problem 7: Write a program that dynamically allocates an integer and assigns a value to it.
#include<iostream>

int main() {
	int* dynAllInt = new int;

	*dynAllInt = 48;

	std::cout << "dynamical allocated integer is: " << dynAllInt << std::endl;


	//probably i need to write delete but you dont ask to
	//so i write this in comments
	//delete dynAllInt;
	return 0;
}