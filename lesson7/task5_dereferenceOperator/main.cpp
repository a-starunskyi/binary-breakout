// Problem 5: Write a program that declares an integer and a pointer to the integer. 
// Assign a value to the integer using the dereference operator.
#include <iostream>

int main() {
    int number; 
    int* ptr = nullptr; 

    ptr = &number; 

    *ptr = 42;

    std::cout << "Value of number: " << number << std::endl; 

    return 0;
}