// Problem1.cpp

#include <iostream>

int main() {
    // TODO:
    // 1. Declare three integer variables a, b, and c and initialize them with any values

    int firstNumber, secondNumber;
    std::cout << "Enter the first number: ";
    std::cin >> firstNumber;
    std::cout << "Enter the second number: ";
    std::cin >> secondNumber;


    //heart of the program
    if (secondNumber == 0) {
        std::cout << "You cant divide by zero" << std::endl; }
    else {

        auto plusNum = firstNumber + secondNumber;
        auto minusNum = firstNumber - secondNumber;
        double multiplyNum = firstNumber * secondNumber;
        double divideNum = firstNumber / secondNumber;
        auto moduloNum = firstNumber % secondNumber;


        //displaying that bad boys
        std::cout << firstNumber << " + " << secondNumber << " = " << plusNum << '\n';
        std::cout << firstNumber << " - " << secondNumber << " = " << minusNum << '\n';
        std::cout << firstNumber << " * " << secondNumber << " = " << multiplyNum << '\n';
        std::cout << firstNumber << " / " << secondNumber << " = " << divideNum << '\n';
        std::cout << firstNumber << " % " << secondNumber << " = " << moduloNum << '\n';
    }


    // 2. Use arithmetic operators +, -, *, /, % to perform operations on these variables
    // 3. Print out the result after each operation
    // 4. Don't forget to handle the situation where the denominator might be zero in a division operation

    return 0;
}
//so