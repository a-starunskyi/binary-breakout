// Defining and Using Constants.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*Write a brief explanation of the difference between const and constexpr in C++. 
Provide a code sample to illustrate your points.*/

/* In this example, the getValue() function returns a runtime - known value, so its result can be assigned to a const variable.
The square() function calculates the square of its argument, and since the argument is known at compile - time, 
the function can be evaluated at compile - time, allowing the result to be assigned to a constexpr variable.*/

#include <iostream>

const int getValue() {
    return 5;
}

constexpr int square(int n) {
    return n * n;
}

int main() {
    const int x = getValue();      // Allowed: getValue() returns a runtime-known value
    constexpr int y = 3;           // Allowed: 3 is a compile-time-known expression
    constexpr int z = square(3);   // Allowed: square(3) is evaluated at compile-time

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;

    return 0;
}
/*When you run this code, you will see that the values of x, y, and z are printed to the console.
The value of x is determined at runtime, while the values of y and z are known at compile - time.
This demonstrates the difference between const and constexpr, with constexpr enabling compile - time computations and const being evaluated at runtime.*/


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
