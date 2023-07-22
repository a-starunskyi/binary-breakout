// Problem7.cpp

#include <iostream>
using namespace std; 

int main() {
    // TODO:
    // 1. Ask the user to input an integer
    
    cout << "Enter an integer: ";
    int inputInt = 0;
    cin >> inputInt;


    // 2. Use bitwise shift operators (>>, <<) to shift the bits of this integer
    
    int halfInt = inputInt >> 1;
    int doubleInt = inputInt << 1;

    // 3. Print out the results of these operations
    
    cout << "One bit shift to the right: " << halfInt << endl;
    cout << "One bit sfift to the left: " << doubleInt << endl;

    // 4. Remember to write comments explaining what your program does
    // This operation moves bites. One shift to the right halves the number, one shift to the left doubles it

    return 0;
}
