// Problem10.cpp

#include <iostream>
using namespace std;

int main() {
    // TODO:
    // 1. Ask the user to input at least three integers
    cout << "Enter 3 integer: " << endl;
    int num1 = 0, num2 = 0, num3 = 0;
    cin >> num1, num2, num3;

    // 2. Perform a variety of operations on these integers
    int res1 = num1 / num2 * num3;
    int res2 = num1 / num2 + num3;
    int res3 = num1 / num2 - num3;
    
    int res4 = num1 * num2 + num3;
    int res5 = num1 * num2 - num3;
    int res6 = num1 * num2 / num3;

    int res7 = num1 + num2 - num3;
    int res8 = num1 + num2 * num3;
    int res9 = num1 + num2 / num3;

    int res10 = num1 - num2 + num3;
    int res11 = num1 - num2 * num3;
    int res12 = num1 - num2 / num3;
    // 3. Make sure you handle operator precedence correctly
    
    // 4. Print out the results in a clear, user-friendly format
    cout << "(" << num1 << "/" << num2 << ")" << "*" << num3 << "=" << res1 << endl;
    cout << "(" << num1 << "/" << num2 << ")" << "+" << num3 << "=" << res2 << endl;
    cout << "(" << num1 << "/" << num2 << ")" << "-" << num3 << "=" << res3 << endl;

    cout << "(" << num1 << "*" << num2 << ")" << "+" << num3 << "=" << res4 << endl;
    cout << "(" << num1 << "*" << num2 << ")" << "-" << num3 << "=" << res5 << endl;
    cout << "(" << num1 << "*" << num2 << ")" << "/" << num3 << "=" << res6 << endl;

    cout << "(" << num1 << "+" << num2 << ")" << "-" << num3 << "=" << res7 << endl;
    cout << num1 << "+" << "(" << num2 << "*" << num3 << ")" << "=" << res8 << endl;
    cout << num1 << "+" << "(" << num2 << "/" << num3 << ")" << "=" << res9 << endl;

    cout << "(" << num1 << "-" << num2 << ")" << "+" << num3 << "=" << res10 << endl;
    cout << num1 << "-" << "(" << num2 << "*" << num3 << ")" << "=" << res11 << endl;
    cout << num1 << "-" << "(" << num2 << "/" << num3 << ")" << "=" << res12 << endl;
    return 0;
}
