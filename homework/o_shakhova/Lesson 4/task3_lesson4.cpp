// task3_lesson4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program in C++ that compares two integers using equality (==) and inequality (!=) operators and prints the results.

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter two integers: " << endl;
    int num1 = 0, num2 = 0; // Initialization
    cin >> num1; // User enter numbers
    cin >> num2;

    bool isEqual = (num1 == num2); // true
    cout << "Result of equality test: " << isEqual << endl;

    bool isUnequal = (num1 != num2); // false
    cout << "Result of inequality test: " << isUnequal << endl;


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
