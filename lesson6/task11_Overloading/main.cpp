// Problem: Overload a function named "add". 
// It should be able to handle both addition of two integers and concatenation of two strings.

#include<iostream>
#include <string>
using namespace std;
int add(int a, int b)
{
	return a + b;
}
string add(const string& str1, const string& str2)
{
	return str1 + str2;
}

// TODO: Overload the function "add"

int main() {
	// TODO: Call the overloaded functions
	int num1 = 7; 
	int num2 = 8;
	string str1 = "Dia";
	string str2 = "na";

	int sum = add(num1, num2);
	string result = add(str1, str2);

	cout << "Sum of 2 integers: " << sum << endl;
	cout << "Concatened strings: " << result << endl;

	return 0;
}
