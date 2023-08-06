#include <iostream>

int main() {
    int* dynamicPtr; 

    dynamicPtr = new int; 

    *dynamicPtr = 12; 

    std::cout << "Value at dynamicPtr: " << *dynamicPtr << std::endl;

    delete dynamicPtr; 

    std::cout << "Value at dynamicPtr after deallocation: " << *dynamicPtr << std::endl;

    return 0;
}
