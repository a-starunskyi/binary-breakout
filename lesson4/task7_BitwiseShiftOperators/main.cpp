// Problem7.cpp

#include <iostream>
using namespace std;

int main() {
    // TODO:
    // 1. Ask the user to input an integer
    cout << "Enter an intefer: " << endl;
    int num1 = 0;
    cin >> num1;
    // 2. Use bitwise shift operators (>>, <<) to shift the bits of this integer
    int halfNum = num1 >> 1;
    int quarterNum = num1 >> 2;
    int doubleNum = num1 << 1;
    int quadrupleNum = num1 << 2;

  
    // 3. Print out the results of these operations
    cout << "Quarter: " << quarterNum << endl;
    cout << "Half: " << halfNum << endl;
    cout << "Double: " << doubleNum << endl;
    cout << "Quadruple: " << quadrupleNum << endl;
    // 4. Remember to write comments explaining what your program does
    //Shift operators move the entire bit sequence to the right or to the left
    return 0;
}
