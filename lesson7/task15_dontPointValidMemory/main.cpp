// Problem 15: Write a program that declares a pointer and doesn't assign a valid memory location to it. 
// Attempt to access the data at this location and explain what happens in comments.

#include <iostream>

int main() {
    int* ptr; // Declare an integer pointer 'ptr' without initializing it with a valid memory location.

    // Attempt to access the data at the location pointed by 'ptr' (Invalid Pointer Access)
    std::cout << "Value of *ptr: " << *ptr << std::endl;

    return 0;
}
