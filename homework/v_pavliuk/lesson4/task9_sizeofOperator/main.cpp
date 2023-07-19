// Problem9.cpp

#include <iostream>

using namespace std;

int main() {
    // TODO:
    // 1. Use the sizeof operator to determine the memory occupied by different data types
    // 2. Print out the results

    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;

    cout << "Size of short int: " << sizeof(short int) << " bytes" << endl;
    cout << "Size of long int: " << sizeof(long int) << " bytes" << endl;
    cout << "Size of long long int: " << sizeof(long long int) << " bytes" << endl;
    cout << "Size of unsigned int: " << sizeof(unsigned int) << " bytes" << endl;

    cout << "Size of int pointer: " << sizeof(int*) << " bytes" << endl;
    cout << "Size of char pointer: " << sizeof(char*) << " bytes" << endl;
    cout << "Size of double pointer: " << sizeof(double*) << " bytes" << endl;

    return 0;
}
