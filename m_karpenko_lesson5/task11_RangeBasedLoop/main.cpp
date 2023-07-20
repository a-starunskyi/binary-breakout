// Problem: Write a program that goes through an array of fixed size and displays all its elements.

#include<iostream>
using namespace std;

int main() 
{
	int num = 1;
	int arr[5]; // Fixed size array

	for (int i = 0; i < 5; i++)
	{
		arr[i] = num;
		num++;
	}
	// TODO: Populate the array

	for (int i = 0; i <5; i++)
	{
		cout << "Array element (" << i << ") = " << arr[i] << endl;
	}

	// TODO: Implement a loop to display all elements of the array

	return 0;
}
