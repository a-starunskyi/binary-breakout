// Problem: Write a function that takes an array of integers and its size, and returns the sum of the elements in the array.

#include<iostream>
int arrayCalculator(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum += arr[i];
	}
	return sum;
}


// TODO: Declare and define the function that calculates the sum of elements in an array

int main() {
	int size;
	std::cout << "Enter the size of array: ";
	std::cin >> size;
	int* arr  = new int[size];
	std::cout << "Enter "  << size << " elements of the array: ";
	for (int i = 0; i < size; ++i) {
		std::cin >> arr[i];
	}
	int sum = arrayCalculator(arr, size);
	std::cout << " the size of the array is: " << sum << std::endl;
	delete[] arr;
	// TODO: Call the function
	return 0;
}
