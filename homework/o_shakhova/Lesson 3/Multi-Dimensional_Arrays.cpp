// Multi-Dimensional_Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* Write a program that declares and initializes a 2x2 integer array with the values 1, 2, 3, 4.
Print the element at row 1 and column 2.*/

#include <iostream>
using namespace std;

int main()
{
    int TwoRowsTwoColumns[2][2] = { {1, 2}, {3, 4} };
    cout << "Row 1, Column 2: " << TwoRowsTwoColumns[0][1] << endl;

    return 0;
}

    

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
