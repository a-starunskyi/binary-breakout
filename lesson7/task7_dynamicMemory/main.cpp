// Problem 7: Write a program that dynamically allocates an integer and assigns a value to it.

#include <iostream>

int main() {
    int* dynamicInt = new int; 

    *dynamicInt = 22; 

    std::cout << "Value of dynamically allocated integer: " << *dynamicInt << std::endl;

    delete dynamicInt;

    return 0;
}