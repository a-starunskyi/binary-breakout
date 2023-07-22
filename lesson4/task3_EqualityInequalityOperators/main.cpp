// Problem3.cpp

#include <iostream>

using namespace std;

int main() {
    // TODO:
    // 1. Ask the user to input two integers
    
    int firstInteger = 0;
    int secondInteger = 0;
    
    cout << "Enter firs number: " << endl;
    cin >> firstInteger;

    cout << "Enter second number: " << endl;
    cin >> secondInteger;

    // 2. Use equality (==) and inequality (!=) operators to compare these integers
    
    bool right = (firstInteger == secondInteger);
    bool wrong = (firstInteger != secondInteger);

    // 3. Print out whether these integers are equal or not

    cout << "The result (1 - true, 0 - false): " << right << endl;

    return 0;
}
