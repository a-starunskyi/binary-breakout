// Problem: Write a function that takes a string as an argument and prints it. Call this function from your main function.

#include<iostream>
using namespace std;

// TODO: Declare and define the function that takes a string and prints it
void coutStr(string a);

int main() 
{
	string hw = "Hello world";

	coutStr(hw);
	// TODO: Call the function
	return 0;
}

void coutStr(string a)
{
	cout << a << endl;
}
