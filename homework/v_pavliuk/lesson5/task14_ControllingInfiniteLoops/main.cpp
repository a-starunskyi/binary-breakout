// Problem: Write a program that keeps taking numbers from the user until a negative number is entered, but terminates after 100 inputs.

// TODO: Implement an infinite loop that keeps taking numbers from the user until a negative number is entered or 100 inputs are taken

#include <iostream>

using namespace std;

int main() {
    const int maxInputs = 100;
    int input;
    int count = 0;

    while (count < maxInputs) {
        cout << "Enter number " << (count + 1) << ": ";
        cin >> input;

        if (input < 0) {
            cout << "Terminating the program because a negative number was entered.\n";
            break;
        }

        count++;
    }

    if (count == maxInputs) {
        cout << "Program termination after 100 inputs.\n";
    }

    return 0;
}
