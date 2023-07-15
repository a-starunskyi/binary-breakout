// Write a brief explanation of the difference between const and constexpr in C++.
// Provide a code sample to illustrate your points.

#include <iostream>
using namespace std;

constexpr double Pi() { return 22.0 / 7; }
constexpr double 2Pi() { return 2 * Pi(); }
int main() {
    // TODO: Explain difference between const and constexpr
    // The main difference lies in optimization. While const always stays as 
    // a variable in memory, constexpr just replaces all the notions of itself 
    // with it's assigned value during the compilation.
    // TODO: Provide code sample
    const double pi = 22.0 / 7;
    cout << "Value of Constant pi = " << pi;
    cout << "\nValue of Constant Expression Pi = " << Pi();
    cout << "\n Value of Constant Expression 2Pi = " << 2Pi();

    return 0;
}