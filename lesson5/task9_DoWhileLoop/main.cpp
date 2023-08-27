// Problem: Write a program that asks the user to enter numbers until a zero is entered.

#include <iostream>
using namespace std;

int main()
{
    int userSelection = 0;
    do
    {
        cout << "Enter your number: " << endl;
        int num = 0;
        cin >> num;

        cout << "Press 0 to exit or choose any other number to continue" << endl;
        cin >> userSelection;
    }

    while (userSelection != 0); // Use while loop 

    cout << "Thank you! Goodbye!" << endl;

    // TODO: Implement a do...while loop to take numbers from user until zero is entered

    return 0;
}
