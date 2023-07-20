// Problem4.cpp

#include <iostream>

int main() {
    // TODO:
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "Input the value for a = ";
    cin >> a;
    cout < "Input the value for b = ";
    cin >> b;
    cout << "Input the value for c = ";
    cin >> c;
    bool aGreaterThanB = (a > b);
    bool aLesserThanB = (a < b);
    bool aGreaterThanC = (a > c);
    bool aLesserThanC = (a < c);
    bool bGreaterThanC = (b > c);
    bool bLesserThanC = (b < c);
    cout << "A is greater than B" << aGreaterThanB;
    cout << "A is lesser than B" << aLesserThanB;
    cout << "A is greater than C" << aGreaterThanC;
    cout << "A is lesser than C" << aLesserThanC;
    cout << "B is greater than C" << bGreaterThanC;
    cout << "B is lesser than C" << bLesserThanC;
    return 0;
}
