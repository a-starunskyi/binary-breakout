// Write a brief explanation of the difference between const and constexpr in C++.
// Provide a code sample to illustrate your points.

#include <iostream>
using namespace std;

int main() {
    // TODO: Explain difference between const and constexpr
   
    cout << "Difference between const and constexpr" << endl;
    cout << "1. const it is a value that can`t na changed after intialization" << endl; 
    cout << "2. constexpr it`s used for variable, function that must be evaluated at compale time" << endl; 


    // TODO: Provide code sample
    cout << "Code sample:" << endl;
    cout << "constexpr int myConstexpr = 10;" << endl;
    cout << "const int myConstant = 42;" << endl; 

    return 0;
}