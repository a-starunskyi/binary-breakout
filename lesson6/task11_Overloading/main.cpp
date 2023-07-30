// Problem: Overload a function named "add". 
// It should be able to handle both addition of two integers and concatenation of two strings.

#include<iostream>
using namespace std;

// Function overload for the addition of two integers
int add(int a, int b) {
	return a + b;
}
// Function overload for the concatenation of two strings
string add(const string& str1, const string& str2) {
	return str1 + str2;
}

int main() {

	int num1 = 5, num2 = 10;
	int sumInt = add(num1, num2);
	cout << "Sum of integers: " << sumInt << endl;

	string str1 = "Hello, ";
	string str2 = "World!";
	string concatStr = add(str1, str2);
	cout << "Concatenated string: " << concatStr < endl;
	return 0;
}
