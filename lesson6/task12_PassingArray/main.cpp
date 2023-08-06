// Problem: Write a function that takes an array of integers and its size, and returns the sum of the elements in the array.

#include<iostream>
using namespace std;

int sumArrayElements(int arr[], int size) {
	int sum = 0;
	for (int i = 0, i < size, i++) {
		sum += arr[i];
	}
	return sum;
}

int main() {
	int size = 0;
	cout << "Enter the size of the array: ";
	cin >> size;
	
	int arr[size] = { };
	cout << "Enter " << size << " elements: ";
	for (int i = 0; i < size, i++) {
		cin >> arr[i];
	}
	
	int result = sumArrayElements(arr, size);
	cout << "Sum of elements in the array: " << result << endl;

	return 0;
}
