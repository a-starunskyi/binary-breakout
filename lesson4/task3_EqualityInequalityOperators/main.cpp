// Problem3.cpp

#include <iostream>

int main() {
    // TODO:
    // 1. Ask the user to input two integers
    std::cout << "enter two numbers..." << std::endl;
    int firstNumber, secondNumber ;
    
    std::cout << "enter first number: " << '\n';
    std::cin >> firstNumber;

    std::cout << "enter second number: " << '\n';
    std::cin >> secondNumber;

    if (firstNumber == secondNumber) {
        std::cout << firstNumber << " and " << secondNumber << " are equal " << std::endl;
    }
    else {
        std::cout << firstNumber << " and " << secondNumber << " are not equal " << std::endl;
    }

    if (firstNumber != secondNumber) {
        std::cout << firstNumber << " and " << secondNumber << " are not equal " << std::endl;
    }
    else {
        std::cout << firstNumber << " and " << secondNumber << " are equal " << std::endl;
    }
    // 2. Use equality (==) and inequality (!=) operators to compare these integers
    // 3. Print out whether these integers are equal or not

    return 0;
}
