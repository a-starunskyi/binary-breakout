// Problem: Write a program that displays the multiplication table from 1 to 10 using nested loops.

#include<iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 10; i++) {
		cout << "Multiplication table of " << i << ":" << endl;
		for (int j = 1; j <= 10; j++) {
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl; // adding a blank line after each multiplication table

	}

	return 0;
}
