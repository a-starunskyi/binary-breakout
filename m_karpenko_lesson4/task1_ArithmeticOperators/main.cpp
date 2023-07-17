// Problem1.cpp

#include <iostream>

using namespace std;

int main() 
{
    // TODO:
    // 1. Declare three integer variables a, b, and c and initialize them with any values
    
    int a = 2; 
    int b = 4;
    int c = 8; 

    // 2. Use arithmetic operators +, -, *, /, % to perform operations on these variables
    
    int sum = a + b + c;
    int subs = a - b - c;
    int mult = a * b * c;
    int div = a / b / c;
    int modDiv = a % b % c;

    // 3. Print out the result after each operation
    
    cout << "Plus numbers: " << sum << endl;
    cout << "Subtracting numbers: " << subs << endl;
    cout << "Multiplication of numbers: " << mult << endl;
    cout << "Division of numbers: " << div << endl;
    cout << "Modulo division of numbers: " << modDiv << endl;

    // 4. Don't forget to handle the situation where the denominator might be zero in a division operation

    return 0;
}
