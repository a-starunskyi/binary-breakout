// Problem 13: Write a program that has a common pointer mistake and explain the mistake in comments.
#include<iostream>

int main() {
	int* ptr; //declaring pointer to int

	int value = 5;
	ptr = &value; //assign adress of value to ptr
	std::cout << "value: " << *ptr << std::endl; //print value that pointed to ptr

	//whats wrong: after ptr that pointed to local var value
	//when value ends ptr become dangling ptr that pointed to invalid memory
	//acces or dereferencing to ptr now will resolve undefined behavior

	return 0;
}