// Problem1.cpp

#include <iostream>

using namespace std;

int main() {
    // TODO:
    // 1. Declare three integer variables a, b, and c and initialize them with any values
    
    int a = 15;
    int b = 11;
    int c = 5;

    // 2. Use arithmetic operators +, -, *, /, % to perform operations on these variables
    
    int add = a + b;
    int subtract = b - c;
    int multiply = a * b;
    int divide = a / c;
    int modulo = b & c;

    // 3. Print out the result after each operation
    
    cout << a << " + " << b << " = " << add << endl;
    cout << b << " - " << c << " = " << subtract << endl;
    cout << a << " * " << b << " = " << multiply << endl;
    cout << a << " / " << c << " = " << divide << endl;
    cout << b << " & " << c << " = " << modulo << endl;


    // 4. Don't forget to handle the situation where the denominator might be zero in a division operation
    
    // Division by zero is not possible 


    return 0;
}
