// Problem 14: Write a program that intentionally causes a memory leak and explain what is happening in comments.
#include<iostream>

int main() {
	//so we allocate memory using new keyword to create integer array
	int* arr = new int[5];
	//his creates a memory leak as the memory allocated for arr is not being released
	//program end here without freeing allocated memory
	return 0;
}