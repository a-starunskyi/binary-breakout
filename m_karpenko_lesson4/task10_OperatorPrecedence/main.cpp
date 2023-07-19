// Problem10.cpp

#include <iostream>

using namespace std;

int main() 
{
    // TODO:
    // 1. Ask the user to input at least three integers
    
    int firstNum = 0;
    int secondNum = 0;
    int threeNum = 0;

    cout << "Intput 3 numbers" << endl;

    cout << endl;
    
    cout << "Input first number: ";
    cin >> firstNum;
    if (firstNum == 0)
    {
        while (firstNum == 0)
        {
            cout << "Your number is zero, enter it again ";
            cin >> firstNum;
        }

    }

    cout << "Input second number: ";
    cin >> secondNum;
    if (secondNum == 0)
    {
        while (secondNum == 0)
        {
            cout << "Your number is zero, enter it again ";
            cin >> secondNum;
        }

    }

    cout << "Input three number: ";
    cin >> threeNum;
    if (threeNum == 0)
    {
        while (threeNum == 0)
        {
            cout << "Your number is zero, enter it again ";
            cin >> threeNum;
        }

    }

    // 2. Perform a variety of operations on these integers
    
    int sum = firstNum + secondNum + threeNum;
    int subs = firstNum - secondNum - threeNum;
    int mult = firstNum * secondNum * threeNum;
    int div = firstNum / secondNum / threeNum;
    int modDiv = firstNum % secondNum % threeNum;
    
    int formula = ((firstNum + secondNum) - (firstNum * secondNum) / threeNum) % firstNum;

    // 3. Make sure you handle operator precedence correctly
      
    cout << "Result : " << endl;

    cout << endl;

    cout << "Plus numbers: " << sum << endl;
    cout << "Subtracting numbers: " << subs << endl;
    cout << "Multiplication of numbers: " << mult << endl;
    cout << "Division of numbers: " << div << endl;
    cout << "Modulo division of numbers: " << modDiv << endl;
    cout << "Formula: " << formula << endl;
    
    // 4. Print out the results in a clear, user-friendly format

    return 0;
}
