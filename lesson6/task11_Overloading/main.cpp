// Problem: Overload a function named "add". 
// It should be able to handle both addition of two integers and concatenation of two strings.

#include<iostream>
using namespace std;

int add(int a, int b);
string add(string a, string b);
// TODO: Overload the function "add"

int main() {

	int numOne = 0;
	int numTwo = 0;

	string strOne = "";
	string strTwo = "";

	cout << "Input two number: " << endl;
	cin >> numOne;
	cin >> numTwo;
	cout << add(numOne, numTwo) << endl;

	cout << "Input two sentences: " << endl;
	cin >> strOne;
	cin >> strTwo;
	cout << add(strOne, strTwo) << endl;

	// TODO: Call the overloaded functions
	return 0;
}

int add(int a, int b)
{
	int sum = 0;
	sum = a + b;

	return sum;
}

string add(string a, string b)
{
	string concatenate = " ";

	concatenate = a + b;

	return concatenate;
}
