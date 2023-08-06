// Problem 19: Write a program that declares a reference and explains what it does in comments.
#include <iostream>
using namespace std;

int main() {
	int num = 42;

	//Declare a reference to an integer
	int& numRef = num; // 'numRef' is now a reference to 'num'

	cout << "Original value of num: " << num << endl;
	cout << "Value of numRef: " << numRef << endl;

	// Modifying the value through the reference
	numRef = 99; // This also modifies 'num'
	
	cout << "Modified value of num: " << num << endl;
	cout << "Value of numRef after modification: " << numRef << endl;

	return 0;
}