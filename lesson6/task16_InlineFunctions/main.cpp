// Problem: Write an inline function that squares a number.

#include<iostream>
using namespace std;

inline int squareNum(int Num) {
	return Num * Num;
}

int main() {
	// TODO: Call the inline function
	int Num = 0;

	cout << "Input number " << endl;
	cin >> Num;

	cout << "The square of a number = ";
	cout << squareNum(Num);

	return 0;
}
