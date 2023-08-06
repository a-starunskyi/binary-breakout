// Problem 13: Write a program that has a common pointer mistake and explain the mistake in comments.

#include <iostream>

int main() {
    int* ptr; // Declaring a pointer without initializing it.

    // Attempting to dereference an uninitialized pointer (Common Pointer Mistake)
    std::cout << "Value of *ptr: " << *ptr << std::endl;

    return 0;
}