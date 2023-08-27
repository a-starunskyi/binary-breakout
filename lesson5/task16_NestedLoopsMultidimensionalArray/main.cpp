// Problem: Write a program that sums all elements of a two-dimensional array using nested loops.

#include <iostream>
using namespace std;

int main()
{
    const int NUM_ROWS = 3;
    const int NUM_COLUMNS = 4;

    // 2D array of integers
    int MyInts[NUM_ROWS][NUM_COLUMNS] = { {34, -1, 879, 22},
                                        {24, 365, -101, -1},
                                        {-20, 40, 90, 97} };
    int totalSum = 0; // Initialize total sum

    // Iterate rows
    for (int row = 0; row < NUM_ROWS; ++row)
    {
        // Iterate columns
        for (int column = 0; column < NUM_COLUMNS; ++column)
        {
            totalSum += MyInts[row][column]; // Add current element to total sum 
        }

        cout << "The sum of all elements in the 2D array: " << totalSum << endl;
    }

    // TODO: Populate the array

    // TODO: Implement nested loops to sum and display the sum of all elements of the array

    return 0;
}
