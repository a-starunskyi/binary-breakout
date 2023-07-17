// Problem7.cpp

#include <iostream>

using namespace std;

int main() {
    // TODO:
    // 1. Ask the user to input an integer
    int inputNum = 0;
    cout << "Input numbers " << endl;
    cin >> inputNum;

    // 2. Use bitwise shift operators (>>, <<) to shift the bits of this integer
    
    int halfNum = inputNum >> 1;
    int quarterNum = inputNum >> 2;
    int doubleNum = inputNum << 1;
    int quadrupleNum = inputNum << 2;
    
    // 3. Print out the results of these operations
    
    cout << "Quarter: " << quarterNum << endl;
    cout << "Half: " << halfNum << endl;
    cout << "Double: " << doubleNum << endl;
    cout << "Quadruple: " << quadrupleNum << endl;
    
    // 4. Remember to write comments explaining what your program does

    return 0;
}
