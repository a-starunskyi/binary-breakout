// Problem8.cpp

#include <iostream>

using namespace std;

int main() {
    // TODO:
    // 1. Declare an integer variable and assign it a value
    // 2. Use this variable with compound assignment operators
    // 3. Print out the result after each operation

    int a = 4;
    a += a;
    cout << "a + a = " << a << endl;
    a *= a;
    cout << "a * a = " << a << endl;
    a /= a;
    cout << "a / a = " << a << endl;
    a %= a;
    cout << "a % a = " << a << endl;
    a <<= a;
    cout << "a << a = " << a << endl;
    a >>= a;
    cout << "a >> a = " << a << endl;
    a &= a;
    cout << "a & a = " << a << endl;
    a |= a;
    cout << " a | a = " << a << endl;
    a ^= a;
    cout << "a ^ a = " << a << endl;
    a -= a;
    cout << "a - a = " << a << endl;

    return 0;
}
