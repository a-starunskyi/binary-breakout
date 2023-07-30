// task2_lesson4.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* Create a C++ program that uses both prefixand postfix increment(++) and decrement(--) operators.
Display the resultand notice the difference between prefixand postfix usage.*/
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int startValue = 20;
    cout << "Start value of integer being operated: " << startValue << endl;

    int postfixIncrement = startValue++;
    cout << "Result of Postfix Increment = " << postfixIncrement << endl; // 20
    cout << "After Postfix Increment, startValue = " << startValue << endl; // 21

    startValue = 20; // Reset
    int prefixIncrement = ++startValue;
    cout << "Result of Prefix Increment = " << prefixIncrement << endl; // 21
    cout << "After Prefix Increment, startValue = " << startValue << endl; // 21

    startValue = 20; // Reset
    int postfixDecrement = startValue--;
    cout << "Result of Postfix Decrement, startValue = " << startValue << endl; // 19
    cout << "After Postfix Decrement, startValue = " << startValue << endl; // 19

    startValue = 20; // Reset
    int prefixDecrement = --startValue;
    cout << "Result of Prefix Decrement, startValue = " << startValue << endl; // 19
    cout << "After Prefix Decrement, startValue = " << startValue << endl; // 19
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
