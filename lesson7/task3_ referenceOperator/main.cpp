// Problem 3: Write a program that declares an integer and a pointer to that integer. 
// Use the reference operator to assign the address of the integer to the pointer.

#include<iostream>

int main() {


	int number = 4;
	int* refNumPtr;


	refNumPtr = &number; // Assign address number to the pointer


	std::cout << "Value of number is: " << number << '\n';
	std::cout << "adress of number is: " << &number << '\n';
	std::cout << "value of refNumPtr is: " << refNumPtr << '\n';
	std::cout << "value of pointed refNumPtr is: " << *refNumPtr << '\n';







	return 0;
}