// Problem: Write a function that swaps the values of two integers. Pass these integers by reference.

#include<iostream>
void swapInt(int &a, int &b) {
	int swp = a;
	a = b;
	b = swp;
}

// TODO: Declare and define the function that swaps two integers

int main() {
	int num1 = 4;
	int num2 = 8;
	std::cout << " integers before swapping is: " << num1  <<" , " << num2 << '\n';
	swapInt(num1, num2);
	std::cout << " integers after swapping is: " << num1 << " , " << num2 ;
	return 0;
}
