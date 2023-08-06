м// Problem 14: Write a program that intentionally causes a memory leak and explain what is happening in comments.

#include <iostream>

int main() {
    // Intentionally causing a memory leak (Allocating memory without freeing it)
    int* ptr = new int[5]; // Allocate an array of 5 integers on the heap using 'new'.

    // Not deallocating the memory pointed to by 'ptr'
    // This line is missing: delete[] ptr;

    return 0;
}