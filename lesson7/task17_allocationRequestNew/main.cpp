// Problem 17: Write a program that attempts to allocate a large amount of memory and checks whether the allocation was successful.
#include<iostream>
#include <new>
int main() {
    try {
        int* memoryReq = new int[9000000000];
        delete[] memoryReq;
    }
    catch (std::bad_alloc) {
        std::cerr << "Memory request error!" << std::endl; //std::cerr outputs error messages and diagnostic information instead of regular program output
    }

    return 0;
}