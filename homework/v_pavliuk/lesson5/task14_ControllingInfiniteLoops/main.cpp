// Problem: Write a program that keeps taking numbers from the user until a negative number is entered, but terminates after 100 inputs.

// TODO: Implement an infinite loop that keeps taking numbers from the user until a negative number is entered or 100 inputs are taken

#include <iostream>

using namespace std;

int main() {

    const int maxInputs = 100;
    int inputCount = 0;

    while (true) {
        int num;
        cout << "Enter a number: ";
        cin >> num;

        if (num < 0) {
            cout << "Terminating the program because a negative number was entered." << endl;
            break;
        }

        inputCount++;

        if (inputCount >= maxInputs) {
            cout << "Maximum input limit reached. Exiting loop." << endl;
            break;
        }
    }
    return 0;
}
