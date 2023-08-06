// Problem 19: Write a program that declares a reference and explains what it does in comments.

#include <iostream>

int main() {
    int num = 42; // Declare and initialize an integer variable 'num'.

    // Declare a reference 'ref' to the variable 'num'.
    int& ref = num;

    std::cout << "Original Value: " << num << std::endl; // Output: Original Value: 42

    // Modify the value of 'num' using the reference 'ref'.
    ref = 100;

    std::cout << "Modified Value: " << num << std::endl; // Output: Modified Value: 100

    return 0;
}
