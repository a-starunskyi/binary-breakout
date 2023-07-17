// Problem4.cpp

#include <iostream>

using namespace std;

int main() 
{
    // TODO:
    // 1. Ask the user to input three integers
    
    int firstNum = 0;
    int secondNum = 0;
    int threeNum = 0;

    cout << "Intput 3 numbers" << endl;

    cout << endl;

    cout << "Input first number: ";
    cin >> firstNum;

    cout << "Input second number: ";
    cin >> secondNum;

    cout << "Input third number: ";
    cin >> threeNum;
    
    // 2. Use relational operators to determine the largest and smallest numbers among the inputs
    
    if (firstNum > secondNum && threeNum)
    {
        cout << "First number is largest then other";
    }
    else if (secondNum > firstNum && threeNum)
    {
        cout << "Second number is largest then other";
    }
    else if (threeNum > firstNum && firstNum)
    {
        cout << "Third number is largest then other";
    }
    else if (firstNum == secondNum && threeNum)
    {
        cout << "Number are equal";
    }

    // 3. Print out these values

    return 0;
}
