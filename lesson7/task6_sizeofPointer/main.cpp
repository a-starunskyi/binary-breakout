// Problem 6: Write a program that declares a pointer and prints its size using the sizeof() function.

#include <iostream>

int main()
{
    int* ptr = nullptr; 


    std::cout << "Size of the pointer: " << sizeof(ptr) << std::endl;

    return 0;
}