// This program should demonstrate implicit and explicit type conversions in C++.
// The program should show both the successful conversion and the loss of data due to the conversion.

#include <iostream>
using namespace std;

int main() {
    int intValue = 408;
    float floatValue = intValue;
    cout << "Implicit conversion:" << endl;
    cout << "int value: " << intValue << endl;
    cout << "float value: " << floatValue << endl;

    // TODO: Demonstrate explicit conversion
    float floatValue2 = 3.14159;
    int intValue2 = floatValue2;

    cout << "Explicit conversion:" << endl;
    cout << "float value: " << floatValue2 << endl;
    cout << "int value: " << intValue2 << endl;
    // TODO: Show loss of data
    float floatValue3 = 3475.5893;
    int intValue3 = floatValue3;
    cout << "loss of data: " << endl;
    cout << "float value: " << floatValue3 << endl;
    cout << "int value: " << intValue3 << endl;

    return 0;
}