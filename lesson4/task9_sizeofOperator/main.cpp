// Problem9.cpp

#include <iostream>
using namespace std;

int main() {
    // TODO:
    // 1. Use the sizeof operator to determine the memory occupied by different data types
    int intNumbers [200] = { 0 };
    bool boolNumbers [1] = { 0 };
    float floatNumbers = 2.3f;
    double doubleNumbers = 3.5f;
    
    // 2. Print out the results
    cout << "Bytes used by an int: " << sizeof(int) << endl;
    cout << "Bytes used by intNumbers: " << sizeof(intNumbers) << endl;
    cout << "Bytes used by an element: " << sizeof(intNumbers[0]) << endl;

    cout << "Bytes used by bool: " << sizeof(bool) << endl;
    cout << "Bytes used by boolNumbers: " << sizeof(boolNumbers) << endl;
    cout << "Bytes used by an element: " << sizeof(boolNumbers[0]) << endl;

    cout << "Bytes used by float: " << sizeof(float) << endl;
    cout << "Bytes used by floatNumbers: " << sizeof(floatNumbers) << endl;
    
    cout << "Bytes used by double: " << sizeof(double) << endl;
    cout << "Bytes used by doubleNumbers: " << sizeof(doubleNumbers) << endl;


    return 0;
}
