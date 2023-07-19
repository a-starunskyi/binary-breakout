// Problem7.cpp

#include <iostream>

using namespace std;

int main() 
 {
        // TODO:
        // 1. Ask the user to input an integer
        // 2. Use bitwise shift operators (>>, <<) to shift the bits of this integer
        // 3. Print out the results of these operations
        // 4. Remember to write comments explaining what your program does

    int num;
    
    cout << "Enter an integer: ";
    cin >> num;

    int rightShiftResult = num >> 1;
    int leftShiftResult = num << 1;

    cout << "Result of right shift by 1 position: " << rightShiftResult << endl;
    cout << "Result of left shift by 1 position: " << leftShiftResult << endl;


    return 0;
}
