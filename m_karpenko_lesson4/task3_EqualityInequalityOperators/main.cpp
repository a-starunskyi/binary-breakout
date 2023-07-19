// Problem3.cpp

#include <iostream>

using namespace std;

int main() 
{
    // TODO:
    // 1. Ask the user to input two integers
    int firstNum = 0;
    int secondNum = 0;
    bool compare = true;

    cout << "Input first number: ";
    cin >> firstNum;

    cout << "Input second number: ";
    cin >> secondNum;
    
    // 2. Use equality (==) and inequality (!=) operators to compare these integers
    
    compare = (firstNum == secondNum);

    cout << "Result of equality test" << compare << endl;

    compare = (firstNum != secondNum);

    cout << "Result of equality test" << compare << endl;


    // 3. Print out whether these integers are equal or not

    return 0;
}
