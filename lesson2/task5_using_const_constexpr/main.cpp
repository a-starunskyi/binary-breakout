// Write a brief explanation of the difference between const and constexpr in C++.
// Provide a code sample to illustrate your points.
constexpr int maGodNess(int x) {
    return(x);
}
#include <iostream>
using namespace std;



int main() {
    
    // TODO: Explain difference between const and constexpr
    //look we cant modify/edit const value after initialization

    //constexpr: is used to define variables or functions whose values can be computed at compile-time

    // TODO: Provide code sample

    const int a = 10;
    //a = 15;  wrong fat ass nigga
    cout << a << endl; 

    constexpr int side = 5; // returns 5 when called
    constexpr int area = maGodNess(side); // too 5
    return 0;
}
//i hope thats enough D: