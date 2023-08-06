// Problem 21: Write a program that declares a constant reference and attempts to change the value it refers to.

#include <iostream>
using namespace std;

int main() {
	int num = 10;
	const int& ref = num; 
	
	cout << "Original value: " << num << endl;
	//Attempting to change the value through constant reference
	ref = 20; // this line will result in a compilation error

	cout << "Modified value: " << num << endl;

	return 0;
}