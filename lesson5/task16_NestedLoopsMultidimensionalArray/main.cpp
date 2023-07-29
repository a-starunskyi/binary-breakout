// Problem: Write a program that sums all elements of a two-dimensional array using nested loops.

#include<iostream>
int main() {
	int arr[2][2];

	// TODO: Populate the arrayf
	std::cout << "Enter 4 int elements: " << std::endl;
	for (int i = 0; i < 2; i++) {
		for (int o = 0; o < 2; o++) {
			std::cin >> arr[i][o];
		}
	}

	// TODO: Implement nested loops to sum and display the sum of all elements of the array
	int sum = 0;
	for (int i = 0; i < 2; i++) {
		for (int o = 0; o < 2; o++) {
			sum += arr[i][o];
		}
	}
	std::cout << "The sum of all elements of the array is: " << sum << std::endl;
	return 0;
}
