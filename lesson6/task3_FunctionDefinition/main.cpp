// Problem: Define a function that reverses an array of integers. Call this function from your main function.

#include<iostream>
using namespace std;
void reverseArray(int arr[], int size) {
	int start = 0;
	int end = size - 1;

	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
	
		start++;
		end--;
	}
}

int main() {
	const int size = 5;
	int arr[size];

	cout << "Enter " << size << " integers: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i] << " ";
	}
	reverseArray(arr, size);

	cout << "Reversed array: ";
	for (int i = 0, i < size, i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
