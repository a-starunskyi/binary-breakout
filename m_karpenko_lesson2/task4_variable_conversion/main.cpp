// This program should demonstrate implicit and explicit type conversions in C++.
// The program should show both the successful conversion and the loss of data due to the conversion.

#include <iostream>
using namespace std;

int main() {
    // TODO: Demonstrate implicit conversion

    char        Sym = 'q';
    int         Num = 123;

    Num = Sym;

    cout << "Char : " << Sym << endl;
    cout << "Demonstrate implicit conversion : " << Num << endl;


    cout << "------------------------------------" << endl;
    // TODO: Demonstrate explicit conversion

    float ChisloDrob = 1.75;
    int Chislo = 0;

    Chislo = ChisloDrob;

    cout << "Float : " << ChisloDrob << endl;
    cout << "Demonstrate explicit conversion: " << Chislo << endl;

    cout << "------------------------------------" << endl;
    // TODO: Show loss of data

    long int LongNum = 2147483647;
    short int ShortNum =  LongNum;

    cout << "Long Number : " << LongNum << endl;
    cout << "Show loss of data: " << ShortNum << endl;

    cout << "------------------------------------" << endl;
    return 0;
}