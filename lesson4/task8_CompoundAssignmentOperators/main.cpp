// Problem8.cpp

#include <iostream>

int main() {
    // TODO:
    // 1. Declare an integer variable and assign it a value
    int num = 408;
    // 2. Use this variable with compound assignment operators
    std::cout << "using compound assignment operator: " << num << std::endl;
    num += 2;
    std::cout << "adding 2 by using compound assignment operator: " << num << std::endl;
    num = 408;//reset
    num -= 2;
    std::cout << "minus 2 by using compound assignment operator: " << num << std::endl;
    // 3. Print out the result after each operation
    std::cout << "and so on, there is many operators and i can print it all but this is just waste of time" << std::endl;
    std::cout << "i think" << '\n';

    return 0;
}
