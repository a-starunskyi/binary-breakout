// Array_of_Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program that declares an array of strings with values "Apple", "Banana", "Cherry". Print the first string from the array

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declare and initialize an array of strings
    string fruits[] = { "Apple", "Banana", "Cherry" };

    //Print the first string from the array
    cout << "First string: " << fruits[0] << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu