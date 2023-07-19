// Problem10.cpp

#include <iostream>

using namespace std;

int main() {
    // TODO:
    // 1. Ask the user to input at least three integers
    // 2. Perform a variety of operations on these integers
    // 3. Make sure you handle operator precedence correctly
    // 4. Print out the results in a clear, user-friendly format

    int a, b, c;
    cout << "Enter your numbers: ";
    cin >> a >> b >> c;

    cout << "Output of specified values: " << "\n";
    cout << "a = " << a << "\n" << "b = " << b << "\n" << "c = " << c << "\n";

    int firstOperation = a + b * c;
    cout << "First operation: " << firstOperation << endl;

    int secondOperation = b / c  - a;
    cout << "Second operation: " << secondOperation << endl;

    int thirdOperation = c * a % b;
    cout << "Third operation: " << thirdOperation << endl;
    
    return 0;
}
