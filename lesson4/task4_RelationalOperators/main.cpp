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
    bool aGtB = (a > b);
    bool aLtB = (a < b);
    bool aGtC = (a > c);
    bool aLtC = (a < c);
    bool bGtC = (b > c);
    bool bLtC = (b < c);
    cout << "A is greater than B" << aGtB;
    cout << "A is lesser than B" << aLtB;
    cout << "A is greater than C" << aGtC;
    cout << "A is lesser than C" << aLtC;
    cout << "B is greater than C" << bGtC;
    cout << "B is lesser than C" << bLtC;
    return 0;
}
