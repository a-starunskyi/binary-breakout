// Problem: Write a program that sums all elements of a two-dimensional array using nested loops.

#include<iostream>
using namespace std;

int main() 
{
	int sum = 0;
	int arr[2][2] = { {2,2},{5,5} };
	// TODO: Populate the array

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			sum += arr[i][j];
			cout << sum << endl;
		}
	}
	
	// TODO: Implement nested loops to sum and display the sum of all elements of the array

	return 0;
}
