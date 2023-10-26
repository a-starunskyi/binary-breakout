// Problem 9: Write a program that declares an integer array and a pointer to the first element of the array. 
// Increment and decrement the pointer and print the values it points to.

#include<iostream>

int main() {
	int arr[] = { 10,20,30,40,50 };
	int* arrPtr = arr;
	
	std::cout << "original array: ";
	for (int i = 0; i < 5; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "Values pointed to pointer: ";
	while (arrPtr >= arr && arrPtr < arr + 5) {
		std::cout << *arrPtr << " ";
		arrPtr++;
	}
	std::cout << std::endl;
	std::cout << "Values pointed to hte pointer that decrementing: ";
	arrPtr--; //move ponter to the last element;
	while (arrPtr >= arr) {
		std::cout << *arrPtr << " ";
		arrPtr--;
	}
	std::cout << std::endl;




	return 0;
}