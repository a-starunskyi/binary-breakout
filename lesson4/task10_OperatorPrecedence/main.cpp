// Problem10.cpp

#include <iostream>
using namespace std;

int main() {
    // TODO:
    // 1. Ask the user to input at least three integers
    
    cout << "Enter three numbers: " << endl;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    cin >> num1;
    cin >> num2;
    cin >> num3;

    // 2. Perform a variety of operations on these integers
    // 3. Make sure you handle operator precedence correctly
    
    int result1 = num1 + num2 * num3;
    int result2 = num1 / num2 + num3;
    int result3 = num1 - num2 / num3;
    int result4 = num1 * num2 / num3;


    // 4. Print out the results in a clear, user-friendly format
    cout << "num1 + (num2 * num3) = " << result1 << endl;
    cout << "(num1 / num2) + num3 = " << result2 << endl;
    cout << "num1 - (num2 / num3) = " << result3 << endl;
    cout << "(num1 * num2) / num3 = " << result4 << endl;

    return 0;
}
