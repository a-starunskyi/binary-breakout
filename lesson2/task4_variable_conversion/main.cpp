// This program should demonstrate implicit and explicit type conversions in C++.
// The program should show both the successful conversion and the loss of data due to the conversion.

#include <iostream>
using namespace std;

int main() {
    // TODO: Demonstrate implicit conversion
    int intValue = 98;
    float floatValue = intValue;
    double doubleValue = floatValue;

    cout << "Implicit conversion" << endl;
    cout << "int value: " << intValue << endl;
    cout << "Conversion from int value to float value: " << floatValue << endl;
    cout << "Conversion from float value to double value: " << doubleValue << endl;

    // TODO: Demonstrate explicit conversion
    
    double exDoubleValue = 8.1656474407846;
    float exFloatValue = exDoubleValue;
    int exIntValue = exFloatValue;

    cout << "Explicit conversion" << endl;
    cout << "double value: " << exDoubleValue << endl;
    cout << "Conversion from double value to float value: " << exFloatValue << endl;
    cout << "Conversion from float value to int value: " << exIntValue << endl;

  
    return 0;
}