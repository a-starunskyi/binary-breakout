// Problem: Demonstrate understanding of the stack by writing a recursive function that generates a stack overflow error.

#include<iostream>
using namespace std;

void stackOverflow() {
	stackOverflow(); // Recursive call to itself
}
int main() {
	stackOverflow();
	 return 0;
}
