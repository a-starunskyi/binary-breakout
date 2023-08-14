// Problem: Demonstrate understanding of the stack by writing a recursive function that generates a stack overflow error.
// TODO: Write a recursive function that generates a stack overflow error to demonstrate understanding of the stack

#include<iostream>
using namespace std;

void stackOverflow() 
{
	stackOverflow(); 
}
int main() 
{
	return 0;
	stackOverflow();
	return 0;
}