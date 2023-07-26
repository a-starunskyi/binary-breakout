// Problem: Write a program that goes through an array of fixed size and displays all its elements.

#include<iostream>
using namespace std;

int main() {
	int arr[5]; 
	cout << "Input 5 integers for the array: " << endl;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	cout << "Array elements: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
