#include <iostream>

int main() {
    // TODO:
    // 1. Declare an integer array of size 2 with the values 5 and 10
    int intArray[2] = { 5,10 };
    // 2. Swap the values of the two elements using a temporary variable
    int temp = intArray[0];
    intArray[0] = intArray[1];
    intArray[1] = temp;
    // 3. Print the result
    std::cout << "Result = " << intArray[0]; \
        << intArray[1]; << endl;
    return 0;
}