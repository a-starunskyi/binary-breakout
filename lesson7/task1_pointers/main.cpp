// Problem 1: Write a program that declares a pointer and explains what it does in comments.
#include <iostream>

int main() {
    int number = 42; // Declare an integer variable named 'number' and initialize it with the value 42.

    int* pointerToNumber; // Declare a pointer to an integer. This pointer will store the memory address of an integer variable.

    pointerToNumber = &number; // Assign the memory address of 'number' to the pointer 'pointerToNumber'.

    std::cout << "Value of 'number': " << number << std::endl; // Print the value of 'number' (42).

    std::cout << "Memory address of 'number': " << &number << std::endl; // Print the memory address of 'number'.

    std::cout << "Value stored in 'pointerToNumber': " << *pointerToNumber << std::endl; // Dereference the pointer to get the value stored at the memory address it points to (42).

    std::cout << "Memory address stored in 'pointerToNumber': " << pointerToNumber << std::endl; // Print the memory address stored in 'pointerToNumber'.

    return 0;
}