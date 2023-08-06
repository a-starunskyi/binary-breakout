// Problem 8: Write a program that dynamically allocates an integer array, assigns values to it and then deletes it.

#include <iostream>

int main() 
{

    int* dynamicIntArray = nullptr;

    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int* dynamicIntArray = new int[size];

    for (int i = 0; i < size; ++i) {
        dynamicIntArray[i] = i;
    }

 
    std::cout << " Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << dynamicIntArray[i] << " ";
    }

    delete[] dynamicIntArray;

    return 0;
}