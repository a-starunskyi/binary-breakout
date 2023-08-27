// Problem: Write a program that calculates the sum of numbers from 1 to n.

#include <iostream>
using namespace std;

int main()
{
    for (char userSelection = 'm'; userSelection != 'x';) {

        cout << "Enter the two integers: " << endl;
        int num1 = 0;
        int num2 = 0;
        cin >> num1;
        cin >> num2;

        int sum = 0; // Initialize sum

        // Calculate sum of numbers from num1 to num2
        for (int i = num1; i < num1 + num2; i++) {
            sum = i + 1; // Add the current value of i to the running total sum
        }

        cout << "Sum of numbers from " << num1 << " to " << num2 << " is " << sum << endl;

        cout << "Press x exit (x) or any other key to recalculate" << endl;
        cin >> userSelection;
    }

    cout << "Goodbye!" << endl;

    // TODO: Take input from the user

    // TODO: Implement a for loop to calculate and display the sum of numbers from 1 to n

    return 0;
}
