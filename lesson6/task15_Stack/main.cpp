// Problem: Demonstrate understanding of the stack by writing a recursive function that generates a stack overflow error.
#include<iostream>

// TODO: Write a recursive function that generates a stack overflow error to demonstrate understanding of the stack
void recrusiveFunc() {
	recrusiveFunc(); //calls inself lol
}
int main() {
	// TODO: Call the recursive function
	recrusiveFunc();
	return 0;
}
