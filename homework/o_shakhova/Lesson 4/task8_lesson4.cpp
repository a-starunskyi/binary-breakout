// task8_lesson4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a C++ program to demonstrate the usage of compound assignment operators.

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int value = 0;
    cin >> value; // Enter the number from user

    // Use the Compound Assigment Operators
    value += 15; // Addition Assigment
    cout << "After += 15, value = " << value << endl;
    value -= 5; // Substraction Assigment
    cout << "After  -= 5, value = " << value << endl;
    value /= 2; // Division Assigment
    cout << "After /= 2, value = " << value << endl;
    value *= 4; // Multiplication Assigment
    cout << "After *= 4, value = " << value << endl;
    value %= 50; // Modulo Assigment
    cout << "After % = 50, value = " << value << endl;

    // Henceforth assigment happens within cout
    cout << "After <<= 1, value = " << (value <<= 1) << endl; // Bitwise Left-Shift Assigment
    cout << "After >> =2, value = " << (value >>= 2) << endl; // Bitwise Right-Shift Assigment

    cout << "After |= 0x55, value = " << (value |= 0x55) << endl; // Bitwise OR Assigment
    cout << "After ^= 0x55, value = " << (value ^= 0x55) << endl; // XOR Assigment
    cout << "After &= 0x55, value = " << (value &= 0x55) << endl; // AND Assigment

    return 0;
}
   




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
