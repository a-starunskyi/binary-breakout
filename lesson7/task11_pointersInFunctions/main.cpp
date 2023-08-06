// Problem 11: Write a function that takes a pointer to an integer as a parameter and doubles the value of the integer. 
// Call this function from your main function.

#include <iostream>
using namespace std;

void doubleValue(int* ptr) {
	*ptr *= 2;
}

int main() {
	int num = 5;
	int* ptr = &num;
	cout << "Original value: " << *ptr << endl;
	
	doubleValue(ptr);

	cout << "Double value: " << *ptr << endl;

	return 0;
}