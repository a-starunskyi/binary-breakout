// Problem: Write a function that takes two integers as parameters and returns their product. Give these parameters default values.

#include<iostream>
using namespace std;

// TODO: Declare and define the function that multiplies two integers with default values
int multiply(int a = 1, int b = 1) 
{
	return a * b;
}
int main() {
	// TODO: Call the function
    int num1 = 5;
    int num2 = 10;

    // Calling multiply with default parameters
    int result1 = multiply();          // Defaults to 1 * 1
    int result2 = multiply(num1);      // Defaults to num1 * 1
    int result3 = multiply(num1, num2); // Uses provided values num1 * num2

    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;
    std::cout << "Result 3: " << result3 << std::endl;

	return 0;
}
