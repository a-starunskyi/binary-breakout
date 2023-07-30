// Problem: Write a program that sums all elements of a two-dimensional array using nested loops.

#include<iostream>
using namespace std;

int main() {
	int arr[2][2] = { { 6,7 },
	                { 3,5 } };
	int sum = 0;

	// TODO: Populate the array

	for (int row = 0; row < 2; ++row)
	{
		for (int column = 0; column < 2; ++column)
		{
			sum += arr[row][column];
		}
	}
	cout << "Sum of all elements: " << sum << endl;
	
	// TODO: Implement nested loops to sum and display the sum of all elements of the array

	return 0;
}
