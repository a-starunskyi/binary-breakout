// Problem: Write a program that keeps taking numbers from the user until a negative number is entered, but terminates after 100 inputs.

#include <iostream>
using namespace std;

int main()
{
    const int maxInputs = 100; // Maximum number of inputs
    int count = 0; // Initialize a counter 

    while (count < maxInputs) // Loop for a maximum of 100 inputs
    {
        int num;
        cout << "Enter a number: ";
        cin >> num;

        if (num < 0)
        {
            cout << "Negative number entered. Ending the loop." << endl;
            break; // Exit the loop if a negative number is entered
        }

        cout << "You entered: " << count << ": " << num << endl;

        count++; // Increment the input counter
    }

    if (count == maxInputs)
    {
        cout << "Maximum number of inputs (" << maxInputs << ") reached." << endl;
    }

    else
    {
        cout << "Loop ended after" << count << "inputs." << endl;
    }
    cout << "Loop ended after " << count << " inputs." << endl;

    // TODO: Implement an infinite loop that keeps taking numbers from the user until a negative number is entered or 100 inputs are taken

    return 0;
}
