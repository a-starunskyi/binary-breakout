// Problem 18: Write a program that demonstrates best practices for using pointers. Explain these practices in comments.
#include<iostream>

int main() {
	int* ptr1 = nullptr; //initializing a pointer to a nullptr to avoid using unitialized memmory
	int someNum = 42;
	int* ptr2 = &someNum;
	////////////////////////////////////////////////////////////////
	if (ptr1 == nullptr) {
		std::cout << "ptr1 is nullptr" << std::endl; //so were just checking is ptr1 is nullptr
	}
	////////////////////////////////////////////////////////////////
	int someNum2 = 100;
	ptr2 = &someNum2; //update pointer to a different object

	std::cout << "value pointed to a ptr2 is:" << *ptr2 << std::endl;
	////////////////////////////////////////////////////////////////
	if (ptr1 != nullptr) {
		int value1 = *ptr1;
		std::cout << "value pointed to a ptr1 is:" << value1 << std::endl;
	}
	else {
		std::cout << "ptr1 is nullptr" << std::endl;
	}
	////////////////////////////////////////////////////////////////
	//using only pointers 
	const int* constPtr = &someNum; //imagine const int, so const pointer to a const int
	return 0;
}