// Problem2.cpp

#include <iostream>

using namespace std;

int main() {
    // TODO:
    // 1. Declare an integer variable

    int basicNum = 10;


    // 2. Use both prefix and postfix increment (++) and decrement (--) operators on this variable

    int plusNum = ++basicNum;

    basicNum = 10;

    int minusNum = --basicNum;

    // 3. Print the variable's value after each operation

    cout << "the result of increment: " << plusNum << endl;
    cout << "the result of decrement: " << minusNum << endl;

    return 0;
}