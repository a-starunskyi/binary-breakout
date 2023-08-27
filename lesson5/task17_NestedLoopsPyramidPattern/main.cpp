// Problem: Write a program that takes an integer n as input and prints a pyramid of stars of n rows. 
// The pyramid should be aligned to the left. 

// For example, if n = 4, the output should look like this:
// *
// **
// ***
// ****

#include <iostream>
using namespace std;

int main()
{
    int numRows;

    cout << "Enter the number of rows for the pyramid: ";
    cin >> numRows;

    // Loop for each row
    for (int row = 1; row <= numRows; ++row)
    {
        // Print spaces to align to the left
        for (int space = 1; space <= numRows - row; ++space)
        {
            cout << " ";
        }

        // Print stars for the current row
        for (int star = 1; star <= 2 * row - 1; ++star)
        {
            cout << "*";
        }

        // Move to the next line for the next row
        cout << endl;
    }


    // TODO: Take input from the user

    // TODO: Implement nested loops to print a pyramid of stars of n rows

    return 0;
}
