// This program should demonstrate implicit and explicit type conversions in C++.
// The program should show both the successful conversion and the loss of data due to the conversion.

#include <iostream>
using namespace std;

int main() {
    // TODO: Demonstrate implicit conversion
   
    int bigNumber = 3000000;
    
    float tinyNumber = bigNumber;

    cout << "Implicit conversion: small number fits into larger number, which is " << tinyNumber << endl;

   
    // TODO: Demonstrate explicit conversion

    char tinyNumber2 = 20;

    int bigNumber2 = tinyNumber2;

    cout << "explicit conversion: big number equals small number, which is " << bigNumber2 << endl;

    
    // TODO: Show loss of data

    short int tinyNumber3 = 10;

    long int bigNumber3 = 20;

    bigNumber3 = tinyNumber3;

    cout << "loss of data: " << bigNumber3 << endl;

    return 0;
}