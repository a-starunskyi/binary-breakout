// Problem: Write a function that takes a string as an argument and prints it. Call this function from your main function.

#include<iostream>
using namespace std;

// TODO: Declare and define the function that takes a string and prints it
void myString(string x);

int main() {
	string y = "Hello world";
	myString(y);

	// TODO: Call the function 
	return 0;
}

void myString(string x)
{
	cout << x << endl;
}
