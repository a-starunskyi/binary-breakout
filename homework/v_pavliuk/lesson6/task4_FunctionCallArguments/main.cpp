// Problem: Write a function that takes a string as an argument and prints it. Call this function from your main function.

#include<iostream>
#include<string>

using namespace std;

// TODO: Declare and define the function that takes a string and prints it
void printString(const string& str) {
	cout << str << endl;
}

int main() {
	
	string message;

	cout << "Enter a string: ";
	getline(cin, message);

	printString(message);
	return 0;
}