// Problem 10: Write a program that declares a constant integer and a pointer to it. 
// Try to change the value of the integer through the pointer.

#include <iostream>

int main() {
    const int constantNumber = 42; 
    const int* pointerToConstantNumber = &constantNumber; 

    std::cout << "Value pointed to by pointerToConstantNumber: " << *pointerToConstantNumber << std::endl;

    //*pointerToConstantNumber = 50; Don't work

    return 0;
}