// task7_lesson4.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* Design a C++ program to shift the bits of a number to leftand right using the bitwise shift operators(>> , << ).
Also, make sure to explain what the program is doing in comments.*/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << "Enter a number: ";
    int inputNum = 0;
    cin >> inputNum;

    // Right Shift by 1: divide the input number by 2 (integer division) by shifting all bits to the right by 1 position
    int halfNum = inputNum >> 1;

    // Right Shift by 2: Divide the input number by 4 (integer division) by shifting all bits to the right by 2 position
    int quaterNum = inputNum >> 2;

    // Left Shift by 1: Multiply the input number by 2 by shifting all bits to the left by 1 position 
    int doubleNum = inputNum << 1;

    // Left Shift by 2: Multiply the input number by 4 by shifting all bits to the left by 2 position
    int quadrupleNum = inputNum << 2;

    cout << "Half: " << halfNum << endl;
    cout << "Quater: " << quaterNum << endl;
    cout << "Double: " << doubleNum << endl;
    cout << "Quadruple: " << quadrupleNum << endl;

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
