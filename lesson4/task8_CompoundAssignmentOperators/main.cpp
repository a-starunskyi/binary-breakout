// Problem8.cpp

#include <iostream>

int main() {
    int a = 10;
    a += a;
    cout << "a + a = " << a;
    a *= a;
    cout << "a * a = " << a;
    a /= a;
    cout << "a / a = " << a;
    a %= a;
    cout << "a % a = " << a;
    a <<= a;
    cout << " a << a = " << a;
    a >>= a;
    cout << "a >> a = " << a;
    a &= a;
    cout << "a & a = " << a;
    a |= a;
    cout << " a | a = " << a;
    a ^= a;
    cout << "a ^ a = " << a;
    a -= a;
    cout << "a - a =" << a;
   

    return 0;
}
