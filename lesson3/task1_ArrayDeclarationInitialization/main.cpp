#include <iostream>

int main() {
    /
    // 1. Declare and initialize an integer array of size 5 with the values 1, 2, 3, 4, 5
    int array[] = { 1, 2, 3, 4, 5 };

    // go to 5th index
    int element = array[4];
    // 2. Print the element at the third index (remember, array indexing starts from 0)
    std::cout << "Element at index 4: " << element << std::endl;

    return 0;
}
