// This program should demonstrate implicit and explicit type conversions in C++.
// The program should show both the successful conversion and the loss of data due to the conversion.

#include <iostream>
using namespace std;

int main() {
    // TODO: Demonstrate implicit conversion
    int IntValue = 98;
    float FloatValue = IntValue;
    double DoubleValue = FloatValue;

    cout << "Implicit conversion" << endl;
    cout << "int value: " << IntValue << endl;
    cout << "Conversion from int value to float value: " << FloatValue << endl;
    cout << "Conversion from float value to double value: " << DoubleValue << endl;

    // TODO: Demonstrate explicit conversion
    
    double ExDoubleValue = 8.1656474407846;
    float ExFloatValue = ExDoubleValue;
    int ExIntValue = ExFloatValue;

    cout << "Explicit conversion" << endl;
    cout << "double value: " << ExDoubleValue << endl;
    cout << "Conversion from double value to float value: " << ExFloatValue << endl;
    cout << "Conversion from float value to int value: " << ExIntValue << endl;

  
    return 0;
}