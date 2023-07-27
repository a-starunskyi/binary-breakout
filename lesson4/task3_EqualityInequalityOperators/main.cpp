// Problem3.cpp

#include <iostream>
using namespace std;

int main() {
    // TODO:
    // 1. Ask the user to input two integers 
    cout << "Enter two integers:" << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;

    // 2. Use equality (==) and inequality (!=) operators to compare these integers
    bool isEqual = (num1 == num2);
    bool isUnequal = (num1 != num2);
    
    // 3. Print out whether these integers are equal or not
    cout << "Result of equality test: " << isEqual << endl;
    cout << "Result of inequality test: " << isUnequal << endl;
    return 0;
}
