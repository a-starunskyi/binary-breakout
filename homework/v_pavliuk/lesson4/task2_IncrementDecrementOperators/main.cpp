#include <iostream>

using namespace std;

int main() {
    // 1. Declare an integer variable
    // 2. Use both prefix and postfix increment (++) and decrement (--) operators on this variable
    // 3. Print the variable's value after each operation

    int num = 4;

    cout << "Initial value: " << num << endl;

    cout << "Prefix increment: " << ++num << endl;

    cout << "Postfix increment: " << num++ << endl;

    cout << "Value after postfix increment: " << num << endl;

    cout << "Prefix decrement: " << --num << endl;

    cout << "Postfix decrement: " << num-- << endl;

    cout << "Value after postfix decrement: " << num << endl;

    return 0;
}
