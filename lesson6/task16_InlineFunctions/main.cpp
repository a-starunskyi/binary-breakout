// Problem: Write an inline function that squares a number.

#include<iostream>
using namespace std;

int squaresNum(int a);
// TODO: Write an inline function that squares a number

int main() {
	// TODO: Call the inline function
	int Num = 0;

	cout << "Input number " << endl;
	cin >> Num;

	cout << "The square of a number = ";
	cout << squaresNum(Num);

	return 0;
}

int squaresNum(int a)
{
	return a * a;
}
