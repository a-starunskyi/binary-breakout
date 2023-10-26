// Problem 12: Write a program that demonstrates the similarities between arrays and pointers.
#include<iostream>

int main() {
	int arr[5] = {2,4,6,8,10 };

	int* arrPtr = arr;
	
	std::cout << "going throug array: " << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "going through array using pointer: " << std::endl;
	for (int i = 0; i < 5; ++i) {
		std::cout << *(arrPtr + i) << " ";
	}



	return 0;
}