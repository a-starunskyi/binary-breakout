// Problem: Write a function that takes two integers as parameters and returns their product. Give these parameters default values.

#include<iostream>
using namespace std;

int multiply(int a = 1, int b = 1) {
	return a * b;
}
// TODO: Declare and define the function that multiplies two integers with default values

int main() {
	int result = multiply(9,9); // if there is only one int, returns value of that int. if there is nothing returns 1
	std::cout << "and result is: " << result;
	// TODO: Call the function
	return 0;
}
