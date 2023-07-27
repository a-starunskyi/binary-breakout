// Problem8.cpp

#include <iostream>

int main() {
    // TODO:
    // 1. Declare an integer variable and assign it a value
    cout << "Enter a value: " << endl;
    int num1 = 0;
    cin >> num1;
    // 2. Use this variable with compound assignment operators
    cout << "Value after +=2: " << num1 += 1 << endl;
    cout << "Value after -=2: " << num1 -= 1 << endl;
    cout << "Value after /=2: " << num1 /= 2 << endl;
    // 3. Print out the result after each operation

    return 0;
}
