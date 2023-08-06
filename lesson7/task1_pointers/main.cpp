// Problem 1: Write a program that declares a pointer and explains what it does in comments.

#include <iostream>
using namespace std;

int main() {
	int num = 42;
	//Declaring a pointer variable and assigning the adress of 'num' to the pointer
	int* ptr = &num;
	//Printing the value of 'num' using the pointer
	cout << "Value of num: " << *ptr << endl;
	//Printing the adress of 'num'
	cout << "Adress of num: " << &num << endl;
	// Printing the value of the pointer itself (which is the adress of 'num')
	cout << "Value of pointer ptr: " << ptr << endl;

	return 0;
}