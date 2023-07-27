// Problem9.cpp

#include <iostream>
using namespace std;

int main() {
    // TODO:
    // 1. Use the sizeof operator to determine the memory occupied by different data types
    int myArray[1000] = { 0 };
    float myFloat = 7.8f;
    char myChar = 78.8;
    bool myBool = true;
    // 2. Print out the results
    cout << "Our example: int myArray[1000] = { 0 }" << endl;
    cout << "int size is: " << sizeof(int) << endl;
    cout << "myArray size is:" << sizeof(myArray) << endl;
    cout << "myArray [1000] size is: " << sizeof(myArray[1000]) << endl;

    cout << "float size is: " << sizeof(float) << endl;
    cout << "myFloat size is: " << sizeof(myFloat) << endl;
   
    cout << "char size is: " << sizeof(char) << endl;
    cout << "myChar size is: " << sizeof(myChar) << endl;

    cout << "bool size is: " << sizeof(bool) << endl;
    cout << "myBool size is: " << sizeof(myBool) << endl;



        return 0;
}
