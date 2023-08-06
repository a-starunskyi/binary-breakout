// Problem: Overload a function named "add". 
// It should be able to handle both addition of two integers and concatenation of two strings.

#include <iostream>
using namespace std;

// Function overload for the addition of two integers
int add(int a, int b) {
	return a + b;
}
// Function overload for the concatenation of two strings
string add(const string& a, const string& b) {
	return a + b;
}

int main() {

	int intA = 5, intB = 10;
	int intResult = add(intA, intB);
	cout << "Sum of integers: " << intResult << endl;

	string strA = "Hello, ";
	string strB = "World!";
	string strResult = add(strA, strB);
	cout << "Concatenated string: " << strResult << endl;
	return 0;
}
