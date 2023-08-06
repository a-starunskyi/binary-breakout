// Problem 9: Write a program that declares an integer array and a pointer to the first element of the array. 
// Increment and decrement the pointer and print the values it points to.

#include <iostream>

int main() {
    int intArray[] = { 10, 222, 40, 65, 55 };

    int* ptr = intArray; 


    std::cout << "Value at pointer: " << *ptr << std::endl; 

    ptr++;
    std::cout << "Value after incrementing: " << *ptr << std::endl; 

  
    ptr++;
    std::cout << "Value after incrementing again: " << *ptr << std::endl; 

    ptr--;
    std::cout << "Value after decrementing: " << *ptr << std::endl; 

    return 0;
}