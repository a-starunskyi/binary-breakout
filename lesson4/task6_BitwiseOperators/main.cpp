// Problem6.cpp

#include <iostream>

int main() {
    int a = 0;
    int b = 1;
    cout << "Input the value for integer A";
    cin >> a;
    int not = ~a;
    cout << "NOT a = " << not;
    int and = a & b;
    cout << "a AND b = " << and;
    int or = a | b;
    cout << "a OR b =" << or;
    int xor = a ^ b;
    cout << "a XOR b = " << xor;

    // 1. Ask the user to input an integer
    // 2. Use bitwise operators (~, &, |, ^) to manipulate this integer
    // 3. Print out the results of these operations

    return 0;
}
