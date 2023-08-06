// Problem: Write a function that takes a string as an argument and prints it. Call this function from your main function.

#include<iostream>
using namespace std;

// TODO: Declare and define the function that takes a string and prints it
void printString(string message) {
	std::cout << message << std::endl;
}
int main() {
	string message = "help meeeeee ";
	// TODO: Call the function
	printString(message);
	return 0;
}
