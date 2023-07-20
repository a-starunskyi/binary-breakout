// Problem1.cpp

#include <iostream>

int main() {
    int a = 10;
    int b = 10;
    int c = 10;
    int addition = a + b + c;
    cout << "a + b + c = " << addition;
    int subtraction = a - b - c;
    cout << "a - b - c =" << subtraction;
    int multiply = a * b * c;
    cout << "a * b * c =" << multiply;
    if (b != 0 && c != 0) {
        int divide = a / b / c;
        cout << "a / b / c =" << divide;
    }
    int modulo = a % b % c;
    cout << "a % b % c =" << modulo;
    return 0;
}
