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
    
    bool isGreaterThanF = (firstNum > secondNum && firstNum > threeNum);
    cout << "Result of " << firstNum << " > " << secondNum << "and" << threeNum;
    cout << " test: " << isGreaterThanF << endl;

    bool isGreaterThanS = (secondNum > firstNum && secondNum > threeNum);
    cout << "Result of " << secondNum << " > " << firstNum << "and" << threeNum;
    cout << " test: " << isGreaterThanS << endl;

    bool isGreaterThanT = (threeNum > firstNum && threeNum > secondNum);
    cout << "Result of " << threeNum << " > " << firstNum << "and" << secondNum;
    cout << " test: " << isGreaterThanT << endl;

    // 3. Print out these values

    return 0;
}
