// Problem9.cpp

#include <iostream>

using namespace std;

int main() {
    // TODO:
    // 1. Use the sizeof operator to determine the memory occupied by different data types
    
    int num= 64;
    long int numLong = 12312312312;
    short int numShort = 2;
    float numFlo = 3.14;
    char symb = 'a';
    bool yeasOrNot = true;
    int array[5] = {0};
    
    // 2. Print out the results

    cout << "Int= " << sizeof(num) << endl;
    cout << "Long int= " << sizeof(numLong) << endl;
    cout << "Short int= " << sizeof(numShort) << endl;
    cout << "Float= " << sizeof(numFlo) << endl;
    cout << "Char= " << sizeof(symb) << endl;
    cout << "Bool= " << sizeof(yeasOrNot) << endl;
    cout << "Array= " << sizeof(array) << endl;


    return 0;
}
