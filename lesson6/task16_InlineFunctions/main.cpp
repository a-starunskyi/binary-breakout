// Problem: Write an inline function that squares a number.

#include<iostream>

// TODO: Write an inline function that squares a number
inline int square(int x) { //The inline suggests to compiler that it can replace the function call directly with the function's code 
	return x * x;
}
int main() {
	int num = 5;
	int result = square(num);
	std::cout << " the square of: " << num << " is " << result << std::endl;
	// TODO: Call the inline function
	return 0;
}
