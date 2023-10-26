// Problem 16: Write a program that declares a pointer, allocates memory to it, and then deletes it. 
// Attempt to access the data at this location and explain what happens in comments.
#include<iostream>

int main() {
	int*  ptr;
	ptr = new int;
	*ptr = 4;
	delete ptr;
	// attempt to access the data at the deleted location
	//cause undefined behavior
	std::cout << "value at the deleted variable: " << *ptr << std::endl;
	return 0;
}
