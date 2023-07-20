// Problem: Write a program that displays the multiplication table from 1 to 10 using nested loops.

#include<iostream>
using namespace std;

int main() 
{

	for (int i = 1; i < 10; ++i) 
	{
		for (int j = 1; j < 10; ++j)
		{
			cout << i << " * " << j << " = " << i * j << "   ";
		}
		cout << endl;
	}
	// TODO: Implement nested loops to display the multiplication table from 1 to 10

	return 0;
}
