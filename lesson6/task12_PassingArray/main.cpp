// Problem: Write a function that takes an array of integers and its size, and returns the sum of the elements in the array.

#include<iostream>
using namespace std;

int sumArray(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i, size; ++i)
	{
		sum += arr[1];
	}
	return sum;
}

// TODO: Declare and define the function that calculates the sum of elements in an array

int main() {
	// TODO: Call the function
	int size; 
	cout << "Enter the size of the array: ";
	cin >> size;
	
	const int ARRAY_SIZE = 5;
	int arr[ARRAY_SIZE];
	cout << "Enter the elements of the array:/n";
	for (int i = 0; i < size; ++i)
	{
		cout << "Element " << i + 1 << ": ";
		cin >> arr[i];
	}

	int totalSum = sumArray(arr, size);
	cout << "Sum of array elements: " << totalSum << endl;
	return 0;
}
