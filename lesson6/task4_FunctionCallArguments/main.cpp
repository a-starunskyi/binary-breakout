// Problem: Write a function that takes a string as an argument and prints it. Call this function from your main function.

#include<iostream>
#include<string>
using namespace std;

void printString(const string& str) {
	cout << str << endl;
}

int main() {
	string message;

	// Input the string from the user
	// getline reads the input line and stores it in the message string
	cout << "Enter a string: ";
	getline(cin, message);

	// Calling the function to print the string
	printString(message);
	return 0;
}
