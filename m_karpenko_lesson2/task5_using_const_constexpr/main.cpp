// Write a brief explanation of the difference between const and constexpr in C++.
// Provide a code sample to illustrate your points.
constexpr int Something() { return 4 - 2; }
#include <iostream>
using namespace std;

int main() {
    // TODO: Explain difference between const and constexpr

    //The primary difference between const and constexpr variables is that the initialization of a const variable can be deferred until run time.
    //A constexpr variable must be initialized at compile time.
       
    // TODO: Provide code sample
    const int SomethihgConstDef = 2;

    cout << "constant SomethingConstDef contaiins value: " << SomethihgConstDef << endl;
    cout << "constexpr Something() returns value: " << Something() << endl;
    return 0;
}