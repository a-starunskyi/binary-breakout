// Problem: Define a function that reverses an array of integers. Call this function from your main function.

#include<iostream>
void reverseArray(int arr[], int size) {
	int start = 0;
	int end = size - 1;
	while (start < end) {
		// Swap elements
		int strt = arr[start];
		arr[start] = arr[end];
		arr[end] = strt;
		// move start and end to the center
		start++;
		end--;
	}
}

// TODO: Define the function to reverse an array

int main() {
	int array[] = {1,2,3,4,5};
	int size = sizeof(array) / sizeof(array[0]);

	std::cout << "Original array: " ;
	for (int i = 0; i < size; i++) {
		std::cout << array[i] << ",";
	} std::cout << '\n' << std::endl;
	// TODO: Call the function to reverse an array
	//call function that reverses array
	reverseArray(array, size);
	std::cout << "reversed array: " ;
	for (int i = 0; i < size; i++) {
		std::cout << array[i] << ",";
	}
	return 0;
}
