// Problem3.cpp

#include <iostream>

using namespace std;

int main() 
{
    // TODO:
    // 1. Ask the user to input two integers
    int firstNum = 0;
    int secondNum = 0;

    cout << "Input first number: ";
    cin >> firstNum;

    cout << "Input second number: ";
    cin >> secondNum;
    
    // 2. Use equality (==) and inequality (!=) operators to compare these integers
    
    if (firstNum == secondNum)
    {
        cout << "These integers are equal" << endl;
    }
    else
    {
        cout << "These integers are NOT equal" << endl;

    }
    // 3. Print out whether these integers are equal or not

    return 0;
}
