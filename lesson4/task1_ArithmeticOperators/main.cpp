

#include <iostream>
using namespace std;

int main() {
    // TODO:
    // 1. Declare three integer variables a, b, and c and initialize them with any values
    int a = 489;
    int b = 18;
    int c = 76;
    // 2. Use arithmetic operators +, -, *, /, % to perform operations on these variables
    int addNums = a + b + c; 
    int subtractNums = a – b - c; 
    int multiplyNums = a * b * c; 
    int divideNums = a / b / c; 
    int moduloNums = a % b % c; 
    // 3. Print out the result after each operation
    cout << a << " + " << b << " + " << c << " = " << addNums << endl;
    cout << a << " - " << b << " - " << c << " = " << subtractNums << endl;
    cout << a << " * " << b << " * " << c << " = " << multiplyNums << endl;
    cout << a << " / " << b << " / " << c << " = " << divideNums << endl;
    cout << a << " % " << b << " % " << c << " = " << moduloNums << endl;
    // 4. Don't forget to handle the situation where the denominator might be zero in a division operation
    // it`s imposible to divide by zero
    return 0;
}
