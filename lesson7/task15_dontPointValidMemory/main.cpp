// Problem 15: Write a program that declares a pointer and doesn't assign a valid memory location to it. 
// Attempt to access the data at this location and explain what happens in comments.
#include<iostream>

int main() {
	int* ptr; //declaring pointer without any value (without initialization) 
	
	//attempt to acess to date at unitialized pointer
	int value = *ptr;
	//this will cause undefined behavior
	//or any other unexpected behavior
	//so we need always initialize pointers (pointers cant be unitialized)
	return 0;
}