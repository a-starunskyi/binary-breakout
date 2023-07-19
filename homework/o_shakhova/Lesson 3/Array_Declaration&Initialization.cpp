// Array_Declaration&Initialization.cpp :  This file contains the 'main' function. Program execution begins and ends there.
/* Write a program that declares and initializes an integer array of size 5 with the values 1, 2, 3, 4, 5 and prints the element at the third index.*/

#include <iostream>
using namespace std;

int main()
{
    int myNumber[5] = { 1, 2, 3, 4, 5 }; // This code declares an integer array myNumber with a size of 5 and initializes it with the values 1, 2, 3, 4, and 5. 
    cout << "Element at index 2: " << myNumber[2] << endl; // It then prints the element at index 2 (which is the third element in the array)

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
