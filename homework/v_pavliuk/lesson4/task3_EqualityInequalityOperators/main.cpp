// Problem3.cpp

#include <iostream>

using namespace std;

int main() {
    // TODO:
    // 1. Ask the user to input two integers
    // 2. Use equality (==) and inequality (!=) operators to compare these integers
    // 3. Print out whether these integers are equal or not

    int num1, num2;

    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    bool isEqual = (num1 == num2);
    bool isNotEqual = (num1 != num2);

    if (isEqual) {
        cout << "The two integers are equal." << endl;
    }
    else if (isNotEqual) {
        cout << "The two integers are not equal." << endl;
    }

    return 0;
}
