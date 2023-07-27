// Problem2.cpp

#include <iostream>

using namespace std;


int main() {
    // TODO:
    // 1. Declare an integer variable
    int num1 = 58;
    cout << "Start value: " << num1 << endl;
    // 2. Use both prefix and postfix increment (++) and decrement (--) operators on this variable
   
    int postfixIncrement = num1++;
    num1 = 58; 
    int prefixIncrement = ++num1;
    num1 = 58;
    int postfixDecrement = num1--;
    num1 = 58; 
    int prefixDecrement = --num1;
 
    // 3. Print the variable's value after each operation
    cout << "Result of Postfix Increment = " << postfixIncrement << endl;
    cout << "After Postfix Increment, startValue = " << num1 << endl;
    cout << "Result of Prefix Increment = " << prefixIncrement << endl;
    cout << "After Prefix Increment, startValue = " << num1 << endl;
    cout << "Result of Postfix Decrement = " << postfixDecrement << endl;
    cout << "After Postfix Decrement, startValue = " << num1 << endl;
    cout << "Result of Prefix Decrement = " << prefixDecrement << endl;
    cout << "After Prefix Decrement, startValue = " << num1 << endl;

    return 0;
}
