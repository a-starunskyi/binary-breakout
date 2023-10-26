// Problem 8: Write a program that dynamically allocates an integer array, assigns values to it and then deletes it.
#include<iostream>

int main() {
	int size = 5;
	int* ptrArrInt = new int[size];
		//assign values
		for (int i = 0; i < size; ++i) {
			//assign some values
			ptrArrInt[i] = i * 4;
		}
	std::cout << "arr elements: "; 
	for (int i = 0; i < size; ++i) {
		std::cout << ptrArrInt[i] << " " << std::endl;
	}

	delete ptrArrInt;
	return 0;
}