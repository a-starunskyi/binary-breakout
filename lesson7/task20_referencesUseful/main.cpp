// Problem 20: Write a program that demonstrates why references are useful.
#include<iostream>

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	int num1 = 4;
	int num2 = 8;
	std::cout << "numbers before swapping num1 = " << num1 << ", num2 = " << num2 << std::endl;

	swap(num1, num2);

	std::cout << "numbers after swappung num1 = " << num1 << ", num2 = " << num2 << std::endl;
	return 0;
}