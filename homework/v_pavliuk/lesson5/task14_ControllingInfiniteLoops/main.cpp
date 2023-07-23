// Problem: Write a program that keeps taking numbers from the user until a negative number is entered, but terminates after 100 inputs.

	// TODO: Implement an infinite loop that keeps taking numbers from the user until a negative number is entered or 100 inputs are taken

#include <iostream>

using namespace std;

    int main() {
        const int maxInputs = 100;
        int userInput;
        int inputCount = 0;

        while (inputCount < maxInputs) {
            cout << "Enter a number (negative number to stop): ";
            cin >> userInput;

            if (userInput < 0) {
                break;
            }
            
        }

        if (inputCount == 0) {
            cout << "No numbers entered." << endl;
        }
        else {
            cout << "Total numbers entered: " << inputCount << endl;
        }

        return 0;
    }

