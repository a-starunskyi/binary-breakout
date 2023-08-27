// Problem: Write a program that goes through an array of fixed size and displays all its elements.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Initialize an array of integers
    int someNums[5] = { 6, 121, -7, 70, 2056 };

    cout << "Array someNums: ";
    for (const int& aNum : someNums)
    {
        cout << aNum << ' '; // Output each element separated by a space
    }
    cout << endl;

    // Output elements from an initializer list using a range-based for loop
    cout << "Initializer list: ";
    for (auto anElement : { 5, 342, 542, -78, 3421 })
    {
        cout << anElement << ' '; // Output each element separeted by a space
    }
    cout << endl;

    // TODO: Populate the array

    // TODO: Implement a loop to display all elements of the array

    return 0;
}
