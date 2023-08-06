// Problem 17: Write a program that attempts to allocate a large amount of memory and checks whether the allocation was successful.

#include <iostream>
using namespace std;

// remove the try-catch block to see this application crash 
int main()
{
    try
    {
        // Request a LOT of memory!
        int* pointsToManyNums = new int[10000000000];
        // Use the allocated memory 

        delete[] pointsToManyNums;
    }
    catch (bad_alloc)
    {
        cout << "Memory allocation failed. Ending program" << endl;
    }
    return 0;
}