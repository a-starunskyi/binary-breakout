// Problem8.cpp

#include <iostream>

using namespace std;

int main() {
    // TODO:
    // 1. Declare an integer variable and assign it a value
    
    int value = 333;

    // 2. Use this variable with compound assignment operators
    
    value += 2;
    cout << value << endl;

    value -= 2;
    cout << value << endl;

    value *= 2;
    cout << value << endl;

    value /= 2;
    cout << value << endl;

    value %= 2;
    cout << value << endl;
    
    value <<= 1;
    cout << value << endl;

    value >>= 1;
    cout << value << endl;

    value |= 0x55;
    cout << value << endl;

    value &= 0x55;
    cout << value << endl;

    value ^= 0x0F;
    cout << value << endl;

    // 3. Print out the result after each operation

    return 0;
}
