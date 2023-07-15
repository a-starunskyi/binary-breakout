// This program should demonstrate implicit and explicit type conversions in C++.
// The program should show both the successful conversion and the loss of data due to the conversion.

#include <iostream>
using namespace std;

int main() {
    // TODO: Demonstrate implicit conversion
    int intVar0 = 66;
    char charVar = 'b';
    intVar0 = intVar0 + charVar;
    cout << "Value of intVar0(66) + charVar('b'): " << intVar0;
    double doubleVar = intVar0 * 2.2;
    cout << " \nValue of doubleVar: " << doubleVar;

    // TODO: Demonstrate explicit conversion
    int intVar1 = 100;
    long longVar;
    intVar = longVar;
    cout << "Value of intVar: " << intVar1;
    cout << " \nValue of longVar: " << longVar;
    // TODO: Show loss of data
    float floatVar = 13.45;
    int intVar2 = floatVar;
    cout << "Value of floatVar: " << floatVar;
    cout << " \nValue of intVar2: " << intVar2;
    return 0;
}