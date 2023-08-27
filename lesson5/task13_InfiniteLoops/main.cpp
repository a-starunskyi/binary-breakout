// Problem: Write a program that keeps taking numbers from the user until a negative number is entered.

#include <iostream>
using namespace std;

int main()
{
    while (true) // Infinite loop
    {
        int num;
        cout << "Enter a number: ";
        cin >> num;

        if (num < 0)
        {
            cout << "Negatie number entered. ending the loop. " << endl;
            break; // Exit the loop if a negative number is entered
        }

        cout << "You entered: " << num << endl;
    }

    cout << "Loop ended." << endl;

    // TODO: Implement an infinite loop that keeps taking numbers from the user until a negative number is entered

    return 0;
}
