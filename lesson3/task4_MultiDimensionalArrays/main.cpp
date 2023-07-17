#include <iostream>

int main() {
    // TODO:
    // 1. Declare and initialize a 2x2 integer array with the values 1, 2, 3, 4
    int intArray[2][2] = { { 1,2 }, { 3,4 } };
    // 2. Print the element at row 1 and column 2 (remember, array indexing starts from 0)
    std::cout << "Row 1 Column 2 = " << intArray[0][1];
    return 0;
}