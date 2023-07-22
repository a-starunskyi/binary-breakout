// Problem4.cpp

#include <iostream>

int main() {
    // TODO:
    // 1. Ask the user to input three integers
    int firstNumber, secondNumber, thirdNumber;

    std::cout << "enter first number: " << std::endl;
    std::cin >> firstNumber;

    std::cout << "enter second number: " << std::endl;
    std::cin >> secondNumber;

    std::cout << "enter third number: " << std::endl;
    std::cin >> thirdNumber;

    //int largest = firstNumber;
    //int largest = secondNumber;

    if (firstNumber > secondNumber && firstNumber > thirdNumber) {
        std::cout << firstNumber << " is the largest one" << std::endl;
    }

    if (secondNumber > firstNumber && secondNumber > thirdNumber) {
        std::cout << secondNumber << " is the largest one" << std::endl;
    }

    if (thirdNumber > firstNumber && thirdNumber > secondNumber) {
        std::cout << thirdNumber << " is the largest one" << std::endl;
    }

    //now i will create whats number is the smallest one

    if (firstNumber < secondNumber && firstNumber < thirdNumber) {
        std::cout << firstNumber << " is the smallest one" << std::endl;
    }

    if (secondNumber < firstNumber && secondNumber < thirdNumber) {
        std::cout << secondNumber << " is the smallest one" << std::endl;
    }

    if (thirdNumber < firstNumber && thirdNumber < secondNumber) {
        std::cout << thirdNumber << " is the smallest one" << std::endl;
    }
    //just copy and pasted thing on the top and change arrow

    // 2. Use relational operators to determine the largest and smallest numbers among the inputs
    // 3. Print out these values

    return 0;
}
// i think thats enough 

