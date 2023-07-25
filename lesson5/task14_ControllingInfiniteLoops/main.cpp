// Problem: Write a program that keeps taking numbers from the user until a negative number is entered, but terminates after 100 inputs.
#include <iostream>

using namespace std;

int main()
{
    int maxInputs = 101;
    int input;
    int num = 1;
    while (num < maxInputs) {
        cout << "Enter number " << num++ << ": ";
        cin >> input;
        if (input < 0) {
            cout << "Termination of the program: negative number is entered.";
            break;
        }
        if (num == maxInputs) {
            cout << "Termination of the program: 100 inputs are entered.";
            break;
        }
    }
}
