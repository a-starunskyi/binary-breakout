// Problem: Write a program that sums all elements of a two-dimensional array using nested loops.

#include<iostream>
using namespace std;

int main() {
	int arr[2][2];

	cout << "Input 4 integers for the array:" << ;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> arr[i][j];
		}
	}

	int sum = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			sum += arr[i][j];
		}
	}

	cout << "The sum of all elements in the array: " << sum;
	return 0;
}
