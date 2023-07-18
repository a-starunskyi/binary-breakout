// Problem7.cpp

#include <iostream>

int main() {
    // Declaring and initializing a variable
    int a = 0;
    cout << "Input the value of the integer A";
    cin >> a;
    //Shifting the bit sequence to the right one bit, essentially halving the number
    int shiftOneR = a >> 1;
    //Shifting a bit to the left, doubling the number
    int shiftOneL = a << 1;
    cout << "Half of your value =" << shiftOneR;
    cout << "Double your value =" << shiftOneL;
 
    return 0;
}
